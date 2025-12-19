#pragma once

#include <Core/api/messages/message_box.h>
#include <Core/text/text_processor.h>

#include <Randomizer/messages/credit_entries/base_entry.h>

#include <memory>
#include <random>
#include <string_view>
#include <unordered_map>
#include <vector>

namespace randomizer::messages {
    class CreditsController {
    public:
        CreditsController();

        bool load(const std::filesystem::path& path);
        bool unload();

        void update(float time);
        void reset();

        core::api::messages::MessageBox& message_box(int id);

    private:
        struct Text {
            app::Vector3 initial_position;
            core::api::messages::MessageBox message_box;
        };

        void parse_text_entry(std::string const& line, int line_number, std::vector<std::string> const& parts);
        void parse_move_entry(std::string const& line, int line_number, std::vector<std::string> const& parts);
        void parse_collection_entry(std::string const& line, int line_number, std::vector<std::string> const& parts);

        class TextProcessor;

        std::mt19937 m_random_generator;
        int m_random_value = 0;

        std::shared_ptr<core::text::ITextProcessor> m_text_processor;
        std::unordered_map<int, Text> m_message_boxes;
        std::vector<std::shared_ptr<credit_entries::BaseEntry>> m_entries;
        std::vector<std::shared_ptr<credit_entries::BaseEntry>> m_active_entries;
        std::unordered_map<int, std::vector<std::string>> m_string_collection;
        int m_current_index = 0;
    };
} // namespace randomizer::messages