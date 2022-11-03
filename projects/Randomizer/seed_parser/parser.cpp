/*

#include <iostream>
#include <antlr4-runtime.h>
#include "SeedLexer.h"
#include "SeedParser.h"

using namespace antlr4;

void parse() {
    std::ifstream stream;
    stream.open("/home/timo/Code/Repositories/wotw-seed-language/seed.wotwr");

    std::stringstream buffer;
    buffer << stream.rdbuf();

    ANTLRInputStream input(buffer);
    SeedLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SeedParser parser(&tokens);
}

 */