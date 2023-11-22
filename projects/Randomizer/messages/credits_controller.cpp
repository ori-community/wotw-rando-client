#include <messages/credit_entries/move_entry.h>
#include <messages/credit_entries/text_entry.h>
#include <messages/credits_controller.h>

#include <Common/ext.h>
#include <Modloader/modloader.h>

#include <fmt/core.h>
#include <fstream>
#include <regex>

namespace randomizer::messages {
    constexpr float Z_VALUE = 20.0f;
    constexpr int RANDOM_SEED = 0;

    std::regex collection_replacement("#([-+]?\\d*)");

    class CreditsController::TextProcessor final : public core::text::ITextProcessor {
    public:
        explicit TextProcessor(CreditsController& credits)
                : m_credits(credits) {}

        ~TextProcessor() override = default;

        void process(ITextProcessor const& base_processor, std::string& text) const override {
            auto new_text = text;
            std::sregex_iterator it(text.begin(), text.end(), collection_replacement);
            for (const std::sregex_iterator end; it != end; ++it) {
                auto id = std::stoi(it->str().substr(2));
                auto const& replacement = m_credits.m_string_collection[id];
                new_text.replace(it->position(), it->size(), replacement[m_credits.m_random_value % replacement.size()]);
            }

            text = new_text;
        }

    private:
        CreditsController& m_credits;
    };

    CreditsController::CreditsController() { // NOLINT(MSC51-CPP)
        auto text_processor = std::make_shared<core::text::CompositeTextProcessor>();
        text_processor->compose<CreditsController::TextProcessor>(*this);
        m_text_processor = text_processor;
    }

    void CreditsController::parse_text_entry(std::string const& line, int line_number, std::vector<std::string> const& parts) {
        if (parts.size() < 7 || parts.size() > 12) {
            modloader::warn("credits_controller", fmt::format("malformed text entry on line '{}'", line_number));
            return;
        }

        auto start_time = std::stof(parts[1]);
        auto length = std::stof(parts[2]);
        auto id = std::stoi(parts[3]);
        auto x = std::stof(parts[4]);
        auto y = std::stof(parts[5]);
        auto alignment = app::AlignmentMode__Enum::Center;
        auto horizontal = app::HorizontalAnchorMode__Enum::Center;
        auto vertical = app::VerticalAnchorMode__Enum::Middle;
        auto fade_in = 0.01f;
        auto fade_out = 0.01f;

        if (parts.size() > 7) {
            alignment = static_cast<app::AlignmentMode__Enum>(std::stoi(parts[6]));
        }

        if (parts.size() > 8) {
            horizontal = static_cast<app::HorizontalAnchorMode__Enum>(std::stoi(parts[8]));
        }

        if (parts.size() > 9) {
            vertical = static_cast<app::VerticalAnchorMode__Enum>(std::stoi(parts[9]));
        }

        if (parts.size() > 10) {
            fade_in = std::stof(parts[10]);
        }

        if (parts.size() > 11) {
            fade_out = std::stof(parts[11]);
        }

        Text& text = m_message_boxes.try_emplace(id).first->second;
        text.message_box.position().set(app::Vector3{ x, y, Z_VALUE });
        text.message_box.text().set(parts[6]);
        text.message_box.text().text_processor(m_text_processor);
        text.message_box.alignment().set(alignment);
        text.message_box.horizontal_anchor().set(horizontal);
        text.message_box.vertical_anchor().set(vertical);
        text.message_box.fade_in().set(fade_in);
        text.message_box.fade_out().set(fade_out);
        text.message_box.show_box(false);

        m_entries.push_back(std::make_shared<credit_entries::TextEntry>(start_time, length, id));
    }

    void CreditsController::parse_move_entry(std::string const& line, int line_number, std::vector<std::string> const& parts) {
        if (parts.size() != 8) {
            modloader::warn("credits_controller", fmt::format("malformed move entry on line '{}'", line_number));
            return;
        }

        auto start_time = std::stof(parts[1]);
        auto length = std::stof(parts[2]);
        auto id = std::stoi(parts[3]);
        auto start_x = std::stof(parts[4]);
        auto start_y = std::stof(parts[5]);
        auto end_x = std::stof(parts[6]);
        auto end_y = std::stof(parts[7]);
        m_entries.push_back(std::make_shared<credit_entries::MoveEntry>(
            start_time,
            length,
            id,
            app::Vector3{ start_x, start_y, Z_VALUE },
            app::Vector3{ end_x, end_y, Z_VALUE }
        ));
    }

    void CreditsController::parse_collection_entry(std::string const& line, int line_number, std::vector<std::string> const& parts) {
        if (parts.size() < 3) {
            modloader::warn("credits_controller", fmt::format("malformed collection entry on line '{}'", line_number));
            return;
        }

        auto id = std::stoi(parts[1]);
        auto& str = m_string_collection[id].emplace_back();
        str = *(parts.begin() + 2);
        for (auto it = parts.begin() + 3; it != parts.end(); ++it) {
            str += "|";
            str += *it;
        }
    }

    bool CreditsController::load(std::string_view path) {
        if (m_current_index != 0) {
            modloader::warn("credits_controller", "Can't reload while running.");
            return false;
        }

        unload();
        if (!std::filesystem::exists(path)) {
            modloader::warn("credits_controller", fmt::format("Can't reload, '{}' file does not exist.", path));
            return false;
        }

        int line_number = 0;
        std::ifstream stream(path.data(), std::ifstream::in);
        for (std::string line; std::getline(stream, line); ++line_number) {
            line = line.substr(0, line.find("//"));
            trim(line);
            if (line.empty()) {
                continue;
            }

            std::vector<std::string> parts;
            split_str(line, parts, '|');
            auto type = std::stoi(parts.front());
            switch (type) {
                case 1: {
                    parse_text_entry(line, line_number, parts);
                }
                case 2: {
                    parse_move_entry(line, line_number, parts);
                }
                case 3: {
                    parse_collection_entry(line, line_number, parts);
                }
                default: {
                    modloader::warn("credits_controller", fmt::format("Parsing credits, encountered invalid type in line '{}'", line_number));
                    break;
                }
            }
        }

        std::sort(m_entries.begin(), m_entries.end(), [](auto const& a, auto const& b) {
            return a->time < b->time;
        });

        return true;
    }

    void CreditsController::update(float time) {
        if (time < 0.f) {
            reset();
            return;
        }

        m_random_value = static_cast<int>(m_random_generator());
        while (m_entries.size() > m_current_index && m_entries[m_current_index]->should_resolve(this, time)) {
            m_active_entries.push_back(m_entries[m_current_index]);
            ++m_current_index;
        }

        for (auto it = m_active_entries.begin(); it != m_active_entries.end();) {
            if ((*it)->resolve(this, time)) {
                it = m_active_entries.erase(it);
            } else {
                ++it;
            }
        }
    }

    void CreditsController::reset() {
        m_random_generator.seed(RANDOM_SEED);
        m_active_entries.clear();
        for (auto& text : m_message_boxes) {
            text.second.message_box.hide(true);
            text.second.message_box.position().set(text.second.initial_position);
        }

        m_current_index = 0;
    }

    bool CreditsController::unload() {
        if (m_current_index != 0) {
            modloader::warn("credits_controller", "Can't unload while running.");
            return false;
        }

        m_message_boxes.clear();
        m_entries.clear();
        m_active_entries.clear();
        m_string_collection.clear();
        return true;
    }

    core::api::messages::MessageBox& CreditsController::message_box(int id) {
        return m_message_boxes[id].message_box;
    }
} // namespace randomizer::messages