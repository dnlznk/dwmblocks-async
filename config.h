#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)                    \
    X("", "bar-keyboard", 0, 10)     \
    X("", "bar-memory", 10, 9)       \
    X("", "bar-cpu", 5, 8)           \
    X("", "bar-temp", 15, 7)         \
    X("", "bar-network-wifi", 60, 6) \
    X("", "bar-network-eth", 60, 5)  \
    X("", "bar-mic", 0, 4)           \
    X("", "bar-audio", 0, 3)         \
    X("", "bar-battery", 120, 2)     \
    X("", "bar-date", 1, 1)

#endif  // CONFIG_H
