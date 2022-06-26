lexer grammar SeedLexer;

NEWLINE: ('\r' '\n')+ | '\n'+ | '\r'+;
COMMENT: ' '* '//' ~[\n]* -> skip;

WHITESPACE : [ \t]+;

ESCAPED_QUOTE: '\\"';
ESCAPED_DOLLAR: '\\$';

INT:
    '-'? [0-9]+;

FLOAT:
    '-'? [0-9]+ '.' [0-9]* |
    '-'? '.' [0-9]+;

SEP: '|';
EQ: '=';
NEQ: '!=';
GT: '>';
LT: '<';
GTE: '>=';
LTE: '<=';

METADATA: '#';
SETUP: 'setup';

COLON: ':';
QUOTE: '"';
DOLLAR_BRACKET_OPEN: '$[';
DOLLAR_BRACE_OPEN: '${';
DOLLAR_PARENTHESES_OPEN: '$(';
BRACKET_OPEN: '[';
BRACKET_CLOSE: ']';
BRACE_OPEN: '{';
BRACE_CLOSE: '}';
PARENTHESES_OPEN: '(';
PARENTHESES_CLOSE: ')';
COMMA: ',';
CHAR: .;
