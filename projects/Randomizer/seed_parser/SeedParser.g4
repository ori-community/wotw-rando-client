parser grammar SeedParser;

options { tokenVocab=SeedLexer; }

file:
    lines EOF;

lines:
    NEWLINE* ( line ( NEWLINE+ line )* NEWLINE* )?;

line:
    triggerLine |
    setupDef |
    metadataDef;

setupDef:
    SETUP WHITESPACE+ action;

metadataDef:
    '#' metadataKey (':' WHITESPACE* metadataValue)?;

metadataKey:
    string;

metadataValue:
    string;

spawnDef:
    SPAWN_DEF WHITESPACE* commaSeparatedNumbers;

triggerLine:
    trigger '|' action;

trigger:
    uberGroup '|' uberState;

uberGroup:
    INT;

uberStateId:
    INT;

uberState:
    uberStateId | uberStateCondition;

uberStateCondition:
    uberStateId comparison number;

action:
    actionType '|' actionArgument ('|' actionArgument)*;

actionType:
    INT;

actionArgument:
    expression |
    number |
    commaSeparatedNumbers |
    '"' interpolatableString '"' |
    '"' string '"' |
    // TODO: Remove once quotes for strings are required
    interpolatableString |
    string;

commaSeparatedNumbers:
    number (',' WHITESPACE* number)*;

commaSeparatedStrings:
    commaSeparatedString (',' WHITESPACE* commaSeparatedString)*;

commaSeparatedString:
    ~(',' | NEWLINE)+;

string:
    ~('"' | '$[' | '$(' | NEWLINE)+;

interpolatableString:
    string* ( interpolation ( string+ interpolation )* string* )?;

expression:
    string comparison number;

comparison:
    EQ | NEQ | GT | LT | GTE | LTE;

number:
    INT | FLOAT;

interpolation:
    actionNameInterpolation |
    locationActionNameInterpolation |
    uberValueInterpolation |
    storedStringInterpolation;

actionNameInterpolation:
    '$[' action ']';

locationActionNameInterpolation:
    '$[' '(' (uberGroup | uberValueInterpolation) '|' (uberState | uberValueInterpolation) ')' ']';

uberValueInterpolation:
    '$(' (uberGroup | uberValueInterpolation) '|' (uberState | uberValueInterpolation) ')';

storedStringInterpolation:
    '${' storedStringId '}';

storedStringId:
    INT;