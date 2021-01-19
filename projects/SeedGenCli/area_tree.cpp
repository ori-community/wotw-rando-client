#include <area_tree.h>

#include <charconv>
#include <iostream>
#include <istream>
#include <sstream>

namespace seedgen
{
    namespace
    {
        constexpr int INDENT_SIZE = 2;

        struct ParserCache
        {
            explicit ParserCache(AreaTree& tree, const std::vector<std::string>& valid_types)
                : tree(tree)
                , valid_types(valid_types)
            {}

            AreaTree& tree;
            std::vector<std::string> lines;
            const std::vector<std::string>& valid_types;

            bool valid = true;
            std::size_t current_line = 0;
        };

        void trim(std::string_view& view)
        {
            while (!view.empty() && isspace(view.front()))
                view.remove_prefix(1);

            while (!view.empty() && isspace(view.back()))
                view.remove_suffix(1);
        }

        void get_name(ParserCache& cache, std::string_view& view, std::string_view type)
        {
            view.remove_prefix(type.size() + 1);
            if (!view.ends_with(":"))
            {
                std::cout << "Missing : on " << type << ", line " << cache.current_line << std::endl;
                cache.valid = false;
            }
            else
                view.remove_suffix(1);
        }

        int get_indent(std::string_view line)
        {
            auto count = 0;
            while (!line.empty() && line.front() == ' ')
            {
                line.remove_prefix(1);
                ++count;
            }
            
            return count;
        }

        void parse_requirement_value(ParserCache& cache, std::string_view line, Requirement& requirement)
        {
            const auto value_idx = line.find('=');
            if (value_idx != std::string::npos)
            {
                const auto value = line.substr(value_idx + 1, std::string::npos);
                line.remove_suffix(value.size() + 1);
                const auto result = std::from_chars(&value.front(), &value.back() + 1, requirement.value);
                if (result.ptr != &value.back() + 1 || result.ec != std::errc())
                {
                    std::cout << "Invalid requirement value '" << value << "', line " << cache.current_line << std::endl;
                    cache.valid = false;
                }
            }

            requirement.name = line;
        }

        void parse_requirement_expression(ParserCache& cache, std::string_view line, RequirementExpression& expression)
        {
            auto prev = 0ull;
            for (auto next = line.find(','); next != std::string::npos; next = line.find(',', prev))
            {
                auto entry = line.substr(prev, next);
                trim(entry);
                if (entry.find(" OR ") != std::string::npos)
                {
                    std::cout << "Syntax error, OR in front of , on requirement '" << line << "', line " << cache.current_line << std::endl;
                    cache.valid = false;
                    return;
                }

                auto& req = expression.And.emplace_back();
                parse_requirement_value(cache, entry, req);
                prev = next + 1ull;
            }
            
            auto last = line.substr(prev, std::string::npos);
            trim(last);

            if (last.find(" OR ") != std::string::npos)
            {
                prev = 0ull;
                for (auto next = last.find(" OR "); next != std::string::npos; next = last.find(" OR ", prev))
                {
                    auto entry = last.substr(prev, next);
                    trim(entry);

                    auto& req = expression.Or.emplace_back();
                    parse_requirement_value(cache, entry, req);
                    prev = next + 4ull;
                }

                auto entry = last.substr(prev, std::string::npos);
                trim(entry);

                auto& req = expression.Or.emplace_back();
                parse_requirement_value(cache, entry, req);
            }
            else
            {
                auto& req = expression.And.emplace_back();
                parse_requirement_value(cache, last, req);
            }
        }

        void parse_requirement(ParserCache& cache, std::vector<RequirementExpression>& requirements, const int indent = INDENT_SIZE * 2)
        {
            while (true)
            {
                ++cache.current_line;
                std::string_view view(cache.lines[cache.current_line]);
                if (view.empty())
                    continue;
                
                if (get_indent(view) < indent)
                    break;

                view.remove_prefix(indent);
                if (view.starts_with(' '))
                {
                    std::cout << "Unexpected indent on requirement '" << view << "', line " << cache.current_line << std::endl;
                    cache.valid = false;
                    return;
                }
                
                const auto value = view.find(':');
                if (value == std::string::npos)
                {
                    std::cout << "Missing ':' on requirement '" << view << "', line " << cache.current_line << std::endl;
                    cache.valid = false;
                    break;
                }

                const auto type = view.substr(0, value);
                view.remove_prefix(type.size() + 1);
                trim(view);

                if (view.empty())
                {
                    // Multiline requirement.
                    while (true)
                    {
                        ++cache.current_line;
                        std::string_view req_view(cache.lines[cache.current_line]);
                        if (req_view.empty())
                            continue;
                        
                        if (get_indent(req_view) < indent + INDENT_SIZE)
                            break;

                        req_view.remove_prefix(static_cast<size_t>(indent) + INDENT_SIZE);
                        if (req_view.starts_with(' '))
                        {
                            std::cout << "Unexpected indent on requirement '" << req_view << "', line " << cache.current_line << std::endl;
                            cache.valid = false;
                            return;
                        }

                        auto& expression = requirements.emplace_back();
                        parse_requirement_expression(cache, req_view, expression);
                    }
                }
                else
                {
                    // Single line requirement.
                    auto& expression = requirements.emplace_back();
                    parse_requirement_expression(cache, view, expression);
                }
            }
        }

        void parse_macro(ParserCache& cache)
        {
            std::string_view view(cache.lines[cache.current_line]);
            get_name(cache, view, "requirement");
            if (!cache.valid)
                return;
            
            std::string name(view);
            auto [it, emplaced] = cache.tree.macros.emplace(name, std::vector<RequirementExpression>());
            if (!emplaced)
            {
                std::cout << "Duplicate macro '" << view << "'" << std::endl;
                cache.valid = false;
                return;
            }

            parse_requirement(cache, it->second, INDENT_SIZE);
        }

        void parse_refill(ParserCache& cache, Anchor& anchor)
        {
            std::string_view view(cache.lines[cache.current_line]);
            view.remove_prefix(INDENT_SIZE + 7);
            const auto has_requirements = view.ends_with(":");
            if (has_requirements)
                view.remove_suffix(1);

            auto& refill = anchor.refills.emplace_back();

            if (view == "Full")
            {
                refill.health = 50;
                refill.energy = 50;
            }
            else if (view == "Checkpoint")
            {
                
            }
            else if (view.starts_with("Health="))
            {
                view.remove_prefix(7);
                const auto result = std::from_chars(&view.front(), &view.back() + 1, refill.health);
                if (result.ptr != &view.back() + 1 || result.ec != std::errc())
                {
                    std::cout << "Invalid health refill '" << view << "', line " << cache.current_line << std::endl;
                    cache.valid = false;
                }
            }
            else if (view.starts_with("Energy="))
            {
                view.remove_prefix(7);
                const auto result = std::from_chars(&view.front(), &view.back() + 1, refill.energy);
                if (result.ptr != &view.back() + 1 || result.ec != std::errc())
                {
                    std::cout << "Invalid energy refill '" << view << "', line " << cache.current_line << std::endl;
                    cache.valid = false;
                }
            }

            if (has_requirements)
                parse_requirement(cache, refill.requirements);
            else
                ++cache.current_line;
        }

        void parse_pickup(ParserCache& cache, Anchor& anchor)
        {
            std::string_view view(cache.lines[cache.current_line]);
            view.remove_prefix(INDENT_SIZE);
            get_name(cache, view, "pickup");
            if (!cache.valid)
                return;

            std::string name(view);
            auto [it, emplaced] = anchor.pickups.emplace(name, Pickup());
            if (!emplaced)
            {
                std::cout << "Duplicate pickup definition '" << view << "' on anchor '" << anchor.name << "', line " << cache.current_line << std::endl;
                cache.valid = false;
                return;
            }

            it->second.name = name;
            parse_requirement(cache, it->second.requirements);
        }

        void parse_connection(ParserCache& cache, Anchor& anchor)
        {
            std::string_view view(cache.lines[cache.current_line]);
            view.remove_prefix(INDENT_SIZE);
            get_name(cache, view, "conn");
            if (!cache.valid)
                return;

            std::string name(view);
            auto [it, emplaced] = anchor.connections.emplace(name, Connection());
            if (!emplaced)
            {
                std::cout << "Duplicate connection definition '" << view << "' on anchor '" << anchor.name << "', line " << cache.current_line << std::endl;
                cache.valid = false;
                return;
            }

            it->second.name = name;
            parse_requirement(cache, it->second.requirements);
        }

        void parse_anchor(ParserCache& cache)
        {
            std::string_view name_view(cache.lines[cache.current_line]);
            get_name(cache, name_view, "anchor");
            if (!cache.valid)
                return;

            const std::string name(name_view);
            const auto [it, emplaced] = cache.tree.anchors.emplace(name, Anchor());
            if (!emplaced)
            {
                std::cout << "Duplicate anchor definition '" << name_view << "'" << std::endl;
                cache.valid = false;
                return;
            }

            auto& anchor = it->second;
            anchor.name = name;

            ++cache.current_line;
            while (cache.valid && (cache.current_line) < cache.lines.size())
            {
                std::string_view view(cache.lines[cache.current_line]);
                if (view.empty())
                    continue;

                const auto indent = get_indent(view);
                if (indent == INDENT_SIZE)
                {
                    view.remove_prefix(INDENT_SIZE);
                    if (view.starts_with("refill "))
                        parse_refill(cache, anchor);
                    else if (view.starts_with("pickup "))
                        parse_pickup(cache, anchor);
                    else if (view.starts_with("conn "))
                        parse_connection(cache, anchor);
                    else
                    {
                        std::cout << "Unexpected syntax '" << view << "', line number " << cache.current_line << std::endl;
                        cache.valid = false;
                    }
                }
                else if (indent == 0)
                    break;
                else
                {
                    std::cout << "Unexpected indent '" << view << "', line number " << cache.current_line << std::endl;
                    cache.valid = false;
                }
            }
        }
    }

    namespace area
    {
        bool parse(AreaTree& tree, std::vector<std::string> const& valid_types, std::istream& stream)
        {
            ParserCache cache(tree, valid_types);
            {
                std::string line;
                while (std::getline(stream, line))
                {
                    std::string_view view(line);
                    //trim_comments(view);
                    if (!view.empty())
                        cache.lines.emplace_back(view);
                }
            }
            
            while (cache.valid && (cache.current_line < cache.lines.size()))
            {
                std::string_view line = cache.lines[cache.current_line];
                if (get_indent(line) != 0)
                {
                    std::cout << "Unexpected indentation, line number " << cache.current_line << std::endl;
                    cache.valid = false;
                }
                else if (line.starts_with("anchor "))
                    parse_anchor(cache);
                else if (line.starts_with("requirement "))
                    parse_macro(cache);
            }

            return cache.valid;
        }

        std::unordered_map<std::string, std::string> generate_seed(AreaTree& tree, int seed)
        {
            std::unordered_map<std::string, std::string> pickups;

            return pickups;
        }
    }
}
