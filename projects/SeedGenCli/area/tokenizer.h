#pragma once

#include <string>
#include <vector>

namespace area
{
    namespace tokenizer
    {
        enum class TokenType
        {
            Null,
            Error,
            Indent,
            Macro,
            Anchor,
            Connection,
            Pickup,
            Refill,
            Quest,
            State,
            Switch,
            Requirement,
            RequirementValue,
            And,
            Or,
            At
        };

        struct Token
        {
            TokenType type;
            std::string value;
            int line;
        };
    }

    std::vector<tokenizer::Token> tokenize(const std::string& area_def);
}
