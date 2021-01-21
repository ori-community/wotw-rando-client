#pragma once

#include <area/parser.h>

#include <unordered_map>

namespace area
{
    namespace emitter
    {
        struct RequirementValue
        {
            std::string name;
            int value = 0;
        };

        struct RequirementExpression
        {
            std::vector<RequirementValue*> all;
            std::vector<RequirementValue*> single;
        };

        struct State;
        struct SwitchExpression
        {
            std::vector<State*> all;
            std::vector<State*> single;
        };

        struct Requirement
        {
            std::optional<SwitchExpression> enabled;
            std::vector<RequirementExpression> expressions;
        };

        struct State
        {
            std::string name;
            Requirement requirement;
        };

        struct Pickup
        {
            std::string name;
            std::vector<RequirementExpression> expressions;
        };

        struct Anchor;
        struct Connection
        {
            Anchor* destination;
            std::vector<RequirementExpression> expressions;
        };

        struct Anchor
        {
            std::vector<Connection> connections;
            std::vector<Pickup> pickups;
        };

        class Area
        {
            std::vector<Anchor> anchors;
            std::vector<State> states;
            std::vector<Requirement> requirements;


            std::unordered_map<std::string, State*> states_map;
            std::unordered_map<std::string, Requirement*> requirements_map;
        };
    }

    emitter::Area emit(parser::AreaTree const& tree, const std::vector<std::string>& constants);
}
