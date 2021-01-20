#include <area/parser.h>

#include <charconv>
#include <iostream>

namespace area
{
    namespace parser
    {
        namespace
        {
            using parsing_iterator = std::vector<Token>::const_iterator;

            struct ParserCache
            {
                std::vector<std::string> states;
                parsing_iterator it;
                parsing_iterator end;
                int indent;
            };

            void parse_indent(ParserCache& cache)
            {
                auto value = 0;
                const auto* first = cache.it->value.data();
                const auto* last = first + cache.it->value.size();
                std::from_chars(first, last, value); // We know this succeeds.
                cache.indent = value;
                ++cache.it;
            }

            std::string get_token_name(const Token& token)
            {
                switch (token.type)
                {
                case TokenType::Null:
                    return "null";
                case TokenType::Error:
                    return "error";
                case TokenType::Indent:
                    return "indent";
                case TokenType::Macro:
                    return "requirement";
                case TokenType::Anchor:
                    return "anchor";
                case TokenType::Connection:
                    return "conn";
                case TokenType::Pickup:
                    return "pickup";
                case TokenType::Refill:
                    return "refill";
                case TokenType::Quest:
                    return "quest";
                case TokenType::State:
                    return "state";
                case TokenType::Switch:
                case TokenType::Requirement:
                    return token.value;
                case TokenType::RequirementValue:
                    return std::string("=") + token.value;
                case TokenType::And:
                    return ",";
                case TokenType::Or:
                    return "OR";
                case TokenType::At:
                    return "at";
                }

                return "undefined";
            }

            TokenType get_next_type(ParserCache& cache)
            {
                const auto next = cache.it + 1;
                if (next == cache.end)
                    return TokenType::Null;

                return next->type;
            }

            void parse_expression(ParserCache& cache, std::vector<std::string>& all, std::vector<std::string>& single,
                                  const TokenType entry_type)
            {
                auto in_or = false;
                while (cache.it != cache.end)
                {
                    if (cache.it->type != entry_type)
                    {
                        if (!in_or)
                        {
                            const auto next = get_next_type(cache);
                            if (next == TokenType::Or)
                                in_or = true;
                        }

                        (in_or ? single : all).push_back(cache.it->value);
                        ++cache.it;
                    }
                    else if (cache.it->type == TokenType::And || cache.it->type == TokenType::Or)
                    {
                        const auto next = get_next_type(cache);
                        if (next == TokenType::Or || next == TokenType::And)
                        {
                            std::cerr << "Unexpected '" << get_token_name(*cache.it) << "' at " << cache.it->line <<
                                std::endl;
                            throw std::exception();
                        }

                        if (cache.it->type == TokenType::And && in_or)
                        {
                            std::cerr << ", after OR " << cache.it->line << std::endl;
                            throw std::exception();
                        }
                    }
                    else
                        break;
                }
            }

            SwitchExpression parse_switch(ParserCache& cache)
            {
                SwitchExpression expression;
                parse_expression(cache, expression.all, expression.single, TokenType::Switch);
                return expression;
            }

            RequirementExpression parse_requirement_expression(ParserCache& cache)
            {
                RequirementExpression expression;
                parse_expression(cache, expression.all, expression.single, TokenType::Requirement);
                return expression;
            }

            Requirement parse_requirement(ParserCache& cache)
            {
                Requirement requirement;
                requirement.enabled = parse_switch(cache);
                const auto initial_indent = cache.indent;
                if (cache.it->type != TokenType::Requirement)
                {
                    std::cerr << "Missing requirement at " << cache.it->line << std::endl;
                    throw std::exception();
                }

                while (cache.it != cache.end && cache.indent != initial_indent)
                {
                    if (cache.it->type == TokenType::Requirement)
                        requirement.expressions.push_back(parse_requirement_expression(cache));
                    else if (cache.it->type == TokenType::Switch)
                        requirement.inner.push_back(parse_requirement(cache));
                    else if (cache.it->type == TokenType::Indent)
                        parse_indent(cache);
                    else
                        break;
                }

                return requirement;
            }

            void parse_define(ParserCache& cache, std::string& name, std::vector<Requirement>& requirements)
            {
                name = cache.it->value;
                ++cache.it;

                while (cache.it != cache.end)
                {
                    if (cache.it->type == TokenType::Switch)
                        requirements.push_back(parse_requirement(cache));
                    else if (cache.it->type == TokenType::Indent)
                        parse_indent(cache);
                    else
                        break;
                }
            }

            Connection parse_connection(ParserCache& cache)
            {
                Connection conn;
                parse_define(cache, conn.name, conn.requirements);
                return conn;
            }

            Pickup parse_pickup(ParserCache& cache)
            {
                Pickup pickup;
                parse_define(cache, pickup.name, pickup.requirements);
                return pickup;
            }

            Refill parse_refill(ParserCache& cache)
            {
                Refill refill;
                parse_define(cache, refill.name, refill.requirements);
                return refill;
            }

            Quest parse_quest(ParserCache& cache)
            {
                Quest quest;
                parse_define(cache, quest.name, quest.requirements);
                return quest;
            }

            State parse_state(ParserCache& cache)
            {
                State state;
                parse_define(cache, state.name, state.requirements);
                return state;
            }

            Anchor parse_anchor(ParserCache& cache)
            {
                Anchor anchor;
                anchor.name = cache.it->value;
                ++cache.it;

                while (true)
                {
                    switch (cache.it->type)
                    {
                    case TokenType::Connection:
                        anchor.connections.push_back(parse_connection(cache));
                        break;
                    case TokenType::Pickup:
                        anchor.pickups.push_back(parse_pickup(cache));
                        break;
                    case TokenType::Refill:
                        anchor.refills.push_back(parse_refill(cache));
                        break;
                    case TokenType::Quest:
                        anchor.quests.push_back(parse_quest(cache));
                        break;
                    case TokenType::State:
                        anchor.states.push_back(parse_state(cache));
                        break;
                    case TokenType::Indent:
                        parse_indent(cache);
                        if (cache.indent == 0)
                            return anchor;
                        break;
                    default:
                        return anchor;
                    }
                }
            }

            Macro parse_macro(ParserCache& cache)
            {
                Macro macro;
                return macro;
            }
        }
    }

    parser::AreaTree parse(const std::vector<Token>& tokens)
    {
        parser::AreaTree area;
        parser::ParserCache cache{
            {},
            tokens.begin(),
            tokens.end(),
            0
        };

        try
        {
            while (cache.it != cache.end)
            {
                if (cache.it->type == TokenType::Indent)
                {
                    parse_indent(cache);
                    if (cache.indent != 0)
                    {
                        std::cerr << "Unexpected indentation at " << cache.it->line << std::endl;
                        throw std::exception();
                    }
                }
                else if (cache.it->type == TokenType::Anchor)
                    area.anchors.push_back(parse_anchor(cache));
                else if (cache.it->type == TokenType::Macro)
                    area.macros.push_back(parse_macro(cache));
                else
                {
                    std::cerr << "Unexpected token '" << parser::get_token_name(*cache.it) << "' at " << cache.it->line
                        <<
                        std::endl;
                    throw std::exception();
                }
            }
        }
        catch (const std::exception&)
        {
        }

        area.valid = true;
        return area;
    }
}
