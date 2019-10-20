
# SpellChecker
A spelling checking program, using TRIE data structure to build Data dictionary of words which can later be used for comparison to test input and produce output to the user in the form of correct suggestion. If the exact word isn't available in the dictionary,then it inserts test word into dictionary for future use.

# What is TRIE data structure and why i choose this ?
TRIE is prefix based search tree, in which it has a node consisting pointer to next letter and a boolean variable.
we can use hashing or min edit distance for suggesting a word closest to the test word input.
