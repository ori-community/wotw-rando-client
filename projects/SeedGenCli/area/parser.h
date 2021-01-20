#pragma once

#include <area/tokenizer.h>

#include <optional>

namespace area
{
    struct RequirementValue
    {
        std::string name;
        std::optional<int> value;
    };

    struct Requirement;

    struct RequirementExpression
    {
        std::vector<std::string> all;
        std::vector<std::string> single;
    };

    struct SwitchExpression
    {
        std::vector<std::string> all;
        std::vector<std::string> single;
    };

    struct Requirement
    {
        SwitchExpression enabled;
        std::vector<RequirementExpression> expressions;
        std::vector<Requirement> inner;
    };

    struct Macro
    {
        std::string name;
        std::vector<Requirement> requirements;
    };

    struct Connection
    {
        std::string name;
        std::vector<Requirement> requirements;
    };

    struct Pickup
    {
        std::string name;
        std::vector<Requirement> requirements;
    };

    struct Refill
    {
        std::string name;
        std::vector<Requirement> requirements;
    };

    struct Quest
    {
        std::string name;
        std::vector<Requirement> requirements;
    };

    struct State
    {
        std::string name;
        std::vector<Requirement> requirements;
    };

    struct Anchor
    {
        std::string name;
        std::vector<Connection> connections;
        std::vector<Pickup> pickups;
        std::vector<Refill> refills;
        std::vector<Quest> quests;
        std::vector<State> states;
    };

    struct AreaTree
    {
        std::vector<Anchor> anchors;
        std::vector<Macro> macros;
        bool valid;
    };

    AreaTree parse(const std::vector<Token>& tokens);
}
