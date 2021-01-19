#pragma once

#include <string>
#include <unordered_map>

namespace seedgen
{
    struct Requirement
    {
        std::string name;
        int value = -1;
    };

    struct RequirementExpression
    {
        std::vector<Requirement> And;
        std::vector<Requirement> Or;
    };

    struct Pickup
    {
        std::string name;
        std::vector<RequirementExpression> requirements;
    };

    struct Connection
    {
        std::string name;
        std::vector<RequirementExpression> requirements;
    };

    struct Refill
    {
        int energy = 0;
        int health = 0;
        std::vector<RequirementExpression> requirements;
    };

    struct Anchor
    {
        std::string name;

        std::unordered_map<std::string, Connection> connections;
        std::unordered_map<std::string, Pickup> pickups;
        std::vector<Refill> refills;
    };

    struct AreaTree
    {
        std::unordered_map<std::string, std::vector<RequirementExpression>> macros;
        std::unordered_map<std::string, Anchor> anchors;
        std::unordered_map<std::string, int> requirement_values;
    };

    namespace area
    {
        bool parse(AreaTree& tree, std::vector<std::string> const& valid_types, std::istream& stream);
        std::unordered_map<std::string, std::string> generate_seed(AreaTree& tree, int seed);
    }
}
