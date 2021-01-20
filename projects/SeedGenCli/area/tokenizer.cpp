#include <area/tokenizer.h>

#include <iostream>
#include <unordered_set>

namespace area
{
    namespace
    {
        using u64 = unsigned long long;
        using tokenizer_function = std::pair<u64, Token> (*)(std::string_view input);

        const std::pair<u64, Token> NULL_TOKEN = std::make_pair(
            0,
            Token{ TokenType::Null, {}, 0 }
        );

        std::pair<u64, Token> create_error(std::string error)
        {
            return std::make_pair(
                0,
                Token{ TokenType::Error, { std::move(error) }, 0 }
            );
        }

        std::pair<u64, Token> tokenize_or(const std::string_view input)
        {
            if (!input.starts_with(" OR "))
                return NULL_TOKEN;

            return std::make_pair(
                4,
                Token{ TokenType::Or, {}, 0 }
            );
        }

        std::pair<u64, Token> tokenize_and(const std::string_view input)
        {
            if (!input.starts_with(","))
                return NULL_TOKEN;

            return std::make_pair(
                1,
                Token{ TokenType::And, {}, 0 }
            );
        }

        std::pair<u64, Token> tokenize_at(const std::string_view input)
        {
            if (!input.starts_with(" at "))
                return NULL_TOKEN;

            auto end = input.find(':');
            if (end == std::string::npos)
                return create_error("Syntax error at reached end of file.");

            const auto at_string = input.substr(4, end - 4);
            const auto separator = at_string.find(',');
            if (separator == std::string::npos)
                return create_error("Syntax error at does not contain comma.");
            
            return std::make_pair(
                end,
                Token{ TokenType::At, {std::string(at_string)}, 0 }
            );
        }

        std::pair<u64, Token> tokenize_indent(const std::string_view input)
        {
            constexpr u64 indent_size = 2;

            if (input.starts_with('\n'))
            {
                u64 i = 1;
                while (i < input.size())
                {
                    if (input.at(i) != ' ')
                        break;

                    ++i;
                }
                
                if ((i - 1) % 2 != 0)
                    return create_error("Malformed indentation.");

                return std::make_pair(
                    i,
                    Token{ TokenType::Indent, std::to_string((i - 1) / 2), 0 }
                );
            }

            return NULL_TOKEN;
        }

        std::pair<u64, Token> skip_whitespace(const std::string_view input)
        {
            return std::make_pair(
                isspace(input.front()) ? 1 : 0,
                Token{ TokenType::Null, {}, 0 }
            );
        }

        std::pair<u64, Token> create_define_token(std::string_view input, const std::string_view define, const TokenType type, bool break_on_newline = false)
        {
            if (input.starts_with(define))
            {
                input.remove_prefix(define.size());
                auto end = 0ull;
                while (input.at(++end) != ':' && (!break_on_newline || input.at(end) == '\n'))
                    if (end >= input.size())
                        return create_error("Syntax error name reached end of file.");

                return std::make_pair(
                    end + define.size() + 1,
                    Token{ type, std::string(input.substr(0, end)), 0 }
                );
            }

            return NULL_TOKEN;
        }

        std::pair<u64, Token> tokenize_macro(const std::string_view input)
        {
            return create_define_token(input, "requirement ", TokenType::Macro);
        }

        std::pair<u64, Token> tokenize_state(std::string_view input)
        {
            return create_define_token(input, "state ", TokenType::State);;
        }

        std::pair<u64, Token> tokenize_anchor(std::string_view input)
        {
            const std::string_view define("anchor ");
            if (input.starts_with(define))
            {
                input.remove_prefix(define.size());
                auto end = 0ull;
                while (input.at(++end) != ':')
                    if (end >= input.size())
                        return create_error("Syntax error name reached end of file.");

                auto view = input.substr(0, end);
                auto at = view.find(" at ");
                if (at != std::string::npos)
                    return std::make_pair(
                        at + define.size() + 1,
                        Token{ TokenType::Anchor, std::string(input.substr(0, at)), 0 }
                    );

                return std::make_pair(
                    end + define.size() + 1,
                    Token{ TokenType::Anchor, std::string(input.substr(0, end)), 0 }
                );
            }

            return NULL_TOKEN;
        }

        std::pair<u64, Token> tokenize_connection(const std::string_view input)
        {
            return create_define_token(input, "conn ", TokenType::Connection);
        }

        std::pair<u64, Token> tokenize_pickup(const std::string_view input)
        {
            return create_define_token(input, "pickup ", TokenType::Pickup);
        }

        std::pair<u64, Token> tokenize_refill(const std::string_view input)
        {
            return create_define_token(input, "refill ", TokenType::Refill, true);
        }

        std::pair<u64, Token> tokenize_quest(const std::string_view input)
        {
            return create_define_token(input, "quest ", TokenType::Quest);
        }

        std::pair<u64, Token> tokenize_switch(const std::string_view input)
        {
            auto end = 0ull;
            while (true)
            {
                const auto c = input.at(end);
                if (isspace(c) || c == '=')
                    break;

                if (c == ',')
                {
                    auto check_end = end + 1;
                    while(true)
                    {
                        const auto ce = input.at(end);
                        if (ce == '\n')
                            return NULL_TOKEN;
                        if (ce == ':')
                            return std::make_pair(
                                end + 1,
                                Token{
                                    TokenType::Switch,
                                    std::string(input.begin(), input.begin() + end),
                                    0
                                }
                            );
                    }
                }

                if (c == ':')
                    return std::make_pair(
                        end + 1,
                        Token{
                            TokenType::Switch,
                            std::string(input.begin(), input.begin() + end),
                            0
                        }
                    );

                ++end;
            }

            return NULL_TOKEN;
        }

        std::pair<u64, Token> tokenize_requirement_value(const std::string_view input)
        {
            if (input.starts_with('='))
            {
                auto end = 0ull;
                while (end < input.size())
                {
                    const auto c = input.at(end);
                    if (isspace(c) || c == ',')
                        return std::make_pair(
                            end,
                            Token{
                                TokenType::RequirementValue,
                                std::string(input.begin() + 1, input.begin() + end),
                                0
                            }
                        );

                    ++end;
                }
                
                return std::make_pair(
                    end - 1,
                    Token{
                        TokenType::RequirementValue,
                        std::string(input.begin() + 1, input.begin() + end - 1),
                        0
                    }
                );
            }

            return NULL_TOKEN;
        }

        std::pair<u64, Token> tokenize_requirement(const std::string_view input)
        {
            auto valid = true;
            auto end = 0ull;
            while (end < input.size())
            {
                const auto c = input.at(end);
                if (isspace(c) || c == ',' || c == '=')
                    break;

                if (c == ':')
                {
                    valid = false;
                    break;
                }

                ++end;
            }

            if (valid && end > 0)
            {
                auto type = TokenType::Requirement;
                std::string name(input.begin(), input.begin() + end);

                return std::make_pair(
                    end,
                    Token{
                        TokenType::Requirement,
                        std::move(name),
                        0
                    }
                );
            }

            return NULL_TOKEN;
        }
        
        std::vector<tokenizer_function> tokenizers{
            tokenize_or,
            tokenize_and,
            tokenize_at,
            tokenize_indent,
            skip_whitespace,
            tokenize_macro,
            tokenize_anchor,
            tokenize_connection,
            tokenize_pickup,
            tokenize_refill,
            tokenize_quest,
            tokenize_state,
            tokenize_switch,
            tokenize_requirement_value,
            tokenize_requirement
        };
    }

    std::vector<Token> tokenize(const std::string& area_def)
    {
        // TODO: Initialize types using parameter input (maybe add it as a part of area_def?).
        std::vector<Token> tokens;
        auto line = 2ull;
        std::string_view input(area_def);

        while (!input.empty())
        {
            auto tokenized = false;
            for (auto tokenizer : tokenizers)
            {
                auto [consumed, token] = tokenizer(input);
                if (token.type == TokenType::Error)
                {
                    // TODO: Add line and character logging.
                    std::cerr << token.value << "' at line " << line << std::endl;
                    return std::vector<Token>();
                }

                if (token.type == TokenType::Indent)
                {
                    ++line;
                    // Take off redundant indent tokens.
                    if (!tokens.empty() && tokens.back().type == TokenType::Indent)
                        tokens.pop_back();
                }

                if (token.type != TokenType::Null)
                {
                    token.line = line;
                    tokens.push_back(token);
                }

                if (consumed != 0)
                {
                    tokenized = true;
                    input.remove_prefix(consumed);

                    break;
                }
            }

            if (!tokenized)
            {
                std::cerr << "Unexpected token at line " << line << std::endl;
                return std::vector<Token>();
            }
        }

        return tokens;
    }
}
