#pragma once
#include <nlohmann/adl_serializer.hpp>
// ReSharper disable once CppUnusedIncludeDirective
#include <Randomizer/seed/instructions.h>

#define INSTRUCTION(T) \
    namespace randomizer::seed::instructions {\
        struct T;\
    }\
    \
    struct randomizer::seed::instructions::T final : IInstruction {\
        static constexpr std::string_view INSTRUCTION_NAME = #T;

#define INSTRUCTION_DERIVE(T, D, ...) \
    namespace randomizer::seed::instructions {\
        struct T;\
    }\
    \
    struct randomizer::seed::instructions::T final : base::D<__VA_ARGS__> { \
        static constexpr std::string_view INSTRUCTION_NAME = #T; \
        using base::D<__VA_ARGS__>::D;\

#define TEMPLATE_INSTRUCTION(B, ...) \
    namespace randomizer::seed::instructions::base {\
        template<__VA_ARGS__>\
        struct B;\
    }\
    \
    template<__VA_ARGS__>\
    struct randomizer::seed::instructions::base::B : IInstruction {

namespace randomizer::seed {
    enum class EqualityComparator {
        Equal,
        NotEqual,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        EqualityComparator,
        {
            {EqualityComparator::Equal,    "Equal"   },
            {EqualityComparator::NotEqual, "NotEqual"},
        }
    );

    enum class Comparator {
        Equal,
        NotEqual,
        Less,
        LessOrEqual,
        Greater,
        GreaterOrEqual,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        Comparator,
        {
            {Comparator::Equal,          "Equal"         },
            {Comparator::NotEqual,       "NotEqual"      },
            {Comparator::Less,           "Less"          },
            {Comparator::LessOrEqual,    "LessOrEqual"   },
            {Comparator::Greater,        "Greater"       },
            {Comparator::GreaterOrEqual, "GreaterOrEqual"},
        }
    );

    enum class LogicOperator {
        And,
        Or,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        LogicOperator,
        {
            {LogicOperator::And, "And"},
            {LogicOperator::Or,  "Or" },
        }
    );

    enum class ArithmeticOperator {
        Add,
        Subtract,
        Multiply,
        Divide,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        ArithmeticOperator,
        {
            {ArithmeticOperator::Add,      "Add"     },
            {ArithmeticOperator::Subtract, "Subtract"},
            {ArithmeticOperator::Multiply, "Multiply"},
            {ArithmeticOperator::Divide,   "Divide"  },
        }
    );

    template<typename T>
        struct TypeStr {
        static constexpr std::string_view VALUE = "Unknown";
    };

    template<>
    struct TypeStr<bool> {
        static constexpr std::string_view VALUE = "Boolean";
    };

    template<>
    struct TypeStr<int> {
        static constexpr std::string_view VALUE = "Integer";
    };

    template<>
    struct TypeStr<float> {
        static constexpr std::string_view VALUE = "Float";
    };

    template<>
    struct TypeStr<std::string> {
        static constexpr std::string_view VALUE = "String";
    };

    template<typename E>
    E parse_enum(const nlohmann::json& j) {
        return static_cast<E>(j.get<int>());
    }

    std::string parse_texture(const nlohmann::json& j);
}
