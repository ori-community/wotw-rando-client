#pragma once

#include <GuiEngine/gui_helpers/layout.h>

#include <array>
#include <regex>
#include <string>

namespace gui_engine
{
    enum class FileSelectorState
    {
        Active,
        Selected,
        Cancelled
    };

    enum class FileSelectorMode
    {
        Load,
        Save
    };

    struct FileSelector
    {
        struct Entry
        {
            Entry();

            std::string name;
            std::string last_written;
            std::string size;
            uintmax_t actual_size;
            bool is_directory;
        };

        FileSelector(std::string const& p_path, FileSelectorMode p_mode, std::regex p_regex = std::regex("[\\s\\S]*"));

        std::string path;
        FileSelectorState state;
        std::regex regex;

        // Internals
        FileSelectorMode mode;
        Layout layout;
        std::array<char, 128> path_buffer;
        std::array<char, 48> name_buffer;
        bool path_active;
        bool name_active;
        int selected_row;
        std::vector<Entry> directories;
        std::vector<Entry> files;
        bool needs_sort;
    };

    namespace file_selector
    {
        void reset(FileSelector& fs);
        void show(FileSelector& fs);
        void regenerate_path(FileSelector& fs);
    }
}
