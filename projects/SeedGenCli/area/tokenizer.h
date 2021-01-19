#pragma once

#include <string>
#include <vector>

namespace area
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
    };

    std::vector<Token> tokenize(const std::string& area_def);
}
