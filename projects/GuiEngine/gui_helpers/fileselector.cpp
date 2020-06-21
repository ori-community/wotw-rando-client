#include <gui_helpers/fileselector.h>

#include <Common/ext.h>

#include <functional>
#include <filesystem>
#include <sstream>

namespace gui_engine
{
    namespace file_selector
    {
        namespace {
            constexpr char TIME_FORMAT_STR[] = "%A, %d %B %Y %H:%M";

            template <typename TP>
            std::time_t to_time_t(TP tp)
            {
                using namespace std::chrono;
                auto sctp = time_point_cast<system_clock::duration>(tp - TP::clock::now() + system_clock::now());
                return system_clock::to_time_t(sctp);
            }

            std::string GetBytesReadable(long i)
            {
                long absolute_i = i < 0 ? -i : i;
                std::string suffix;
                double readable;
                if (absolute_i >= 0x1000000000000000) // Exabyte
                {
                    suffix = "EB";
                    readable = (i >> 50);
                }
                else if (absolute_i >= 0x4000000000000) // Petabyte
                {
                    suffix = "PB";
                    readable = (i >> 40);
                }
                else if (absolute_i >= 0x10000000000) // Terabyte
                {
                    suffix = "TB";
                    readable = (i >> 30);
                }
                else if (absolute_i >= 0x40000000) // Gigabyte
                {
                    suffix = "GB";
                    readable = (i >> 20);
                }
                else if (absolute_i >= 0x100000) // Megabyte
                {
                    suffix = "MB";
                    readable = (i >> 10);
                }
                else if (absolute_i >= 0x400) // Kilobyte
                {
                    suffix = "KB";
                    readable = i;
                }
                else
                    return format("%d B", i); // Byte

                return format("%f3 %s", readable / 1024, suffix.c_str());
            }
        }

        void regenerate_path(FileSelector& fs)
        {
            fs.selected_row = -1;
            fs.directories.clear();
            fs.files.clear();

            if (std::filesystem::is_directory(fs.path))
            {
                fs.needs_sort = true;
                for (auto const& fs_entry : std::filesystem::directory_iterator(fs.path))
                {
                    FileSelector::Entry entry;
                    entry.is_directory = fs_entry.is_directory();
                    entry.name = fs_entry.path().filename().string();

                    auto tt = to_time_t(fs_entry.last_write_time());
                    std::tm* gmt = std::gmtime(&tt);
                    std::stringstream buffer;
                    buffer << std::put_time(gmt, TIME_FORMAT_STR);
                    entry.last_written = buffer.str();

                    if (!entry.is_directory)
                    {
                        if (!regex_match(entry.name, fs.regex))
                            continue;

                        entry.actual_size = fs_entry.file_size();
                        entry.size = GetBytesReadable(entry.actual_size);
                        fs.files.push_back(entry);
                    }
                    else
                        fs.directories.push_back(entry);
                }
            }
        }

        namespace {
            std::chrono::system_clock::time_point parse_time(std::string_view str)
            {
                std::tm tm = {};
                std::stringstream ss(str.data());
                ss >> std::get_time(&tm, TIME_FORMAT_STR);
                return std::chrono::system_clock::from_time_t(std::mktime(&tm));
            }

            std::function<bool(FileSelector::Entry const&, FileSelector::Entry const&)> sort_function(ImGuiTableSortSpecs const* sort_specs)
            {
                return [sort_specs](FileSelector::Entry const& l, FileSelector::Entry const& r) -> bool {
                    for (auto i = 0; i < sort_specs->SpecsCount; ++i)
                    {
                        auto const& spec = sort_specs->Specs[i];
                        
                        auto al = spec.SortDirection == ImGuiSortDirection_Ascending ? &l : &r;
                        auto ar = spec.SortDirection == ImGuiSortDirection_Ascending ? &r : &l;

                        if (spec.ColumnUserID == 1)
                            return parse_time(al->last_written) < parse_time(ar->last_written);

                        if (spec.ColumnUserID == 2)
                        {
                            if (al->is_directory)
                            {
                                // We want to do normal ascending name sorting on directories when sorting by size.
                                al = &l;
                                ar = &r;
                            }
                            else
                                return al->actual_size < ar->actual_size;
                        }

                        auto cmp = al->name.compare(ar->name);
                        if (cmp != 0)
                            return cmp < 0;
                    }

                    return true;
                };
            }

            bool resolve_file_path(FileSelector& fs, std::string new_path)
            {
                auto directory = std::filesystem::is_directory(new_path);
                if (directory && new_path.compare(new_path.size() - 1, 1, "\\") != 0)
                    new_path += "\\";

                if (new_path == fs.path)
                {
                    strcpy_s(fs.path_buffer.data(), fs.path_buffer.size(), new_path.c_str());
                    return false;
                }

                std::filesystem::path path_check(new_path);
                if (!directory)
                    path_check = path_check.parent_path();

                if (fs.mode == FileSelectorMode::Load && !std::filesystem::exists(new_path))
                {
                    strcpy_s(fs.path_buffer.data(), fs.path_buffer.size(), fs.path.c_str());
                    // TODO: Set error message
                    return false;
                }
                else if (fs.mode == FileSelectorMode::Save && !std::filesystem::exists(path_check))
                {
                    strcpy_s(fs.path_buffer.data(), fs.path_buffer.size(), fs.path.c_str());
                    // TODO: Set error message
                    return false;
                }
                else
                    strcpy_s(fs.path_buffer.data(), fs.path_buffer.size(), new_path.c_str());


                auto filename = std::filesystem::path(new_path).filename().string();
                strcpy_s(fs.name_buffer.data(), fs.name_buffer.size(), filename.c_str());

                fs.path = new_path;
                if (!directory)
                    fs.state = FileSelectorState::Selected;

                regenerate_path(fs);
                return true;
            }

            void do_row(FileSelector& fs, int row_index, FileSelector::Entry const& entry, ImVec2 mouse_pos, int click_state)
            {
                auto scroll = ImGui::GetScrollY();
                auto wpos = ImGui::GetWindowPos();
                auto start = wpos + ImGui::GetCursorPos();
                start.y -= scroll;

                ImGui::TableSetColumnIndex(0);
                ImGui::Text(entry.name.c_str());

                ImGui::TableSetColumnIndex(1);
                ImGui::Text(entry.last_written.c_str());

                ImGui::TableSetColumnIndex(2);
                ImGui::Text(entry.size.c_str());

                if (fs.selected_row == row_index)
                {
                    ImGui::PushStyleColor(ImGuiCol_TableRowBg, { 0.3f, 0.3f, 0.3f, 1.f });
                    ImGui::PushStyleColor(ImGuiCol_TableRowBgAlt, { 0.3f, 0.3f, 0.3f, 1.f });
                    ImGui::TableNextRow();
                    ImGui::PopStyleColor(2);
                }
                else
                    ImGui::TableNextRow();

                auto end = wpos + ImGui::GetCursorPos() + ImVec2{ ImGui::GetWindowSize().x, -scroll };
                if (click_state > 0)
                {
                    auto in_x = mouse_pos.x > start.x && mouse_pos.x < end.x;
                    auto in_y = mouse_pos.y > start.y && mouse_pos.y < end.y;
                    if (in_x && in_y)
                    {
                        fs.selected_row = row_index;
                        strcpy_s(fs.name_buffer.data(), fs.name_buffer.size(), entry.name.c_str());
                        if (click_state == 2)
                            resolve_file_path(fs, format("%s%s", fs.path.c_str(), entry.name.c_str()));
                    }
                }
            }
        }

        void reset(FileSelector& fs)
        {
            fs.state = FileSelectorState::Active;
            std::filesystem::path path(fs.path);
            path.remove_filename();
            fs.path = path.string();
            resolve_file_path(fs, fs.path);
        }

        void show(FileSelector& fs)
        {
            // TODO: Add confirmation dialog in save mode when a file gets chosen.
            // TODO: Force a file extension on a file (optional)

            auto& l = fs.layout;

            auto pos = ImGui::GetCursorPos();
            auto bounds = ImRect(
                pos,
                pos + ImGui::GetContentRegionAvail()
            );

            layout::calculate_bounds(l, bounds);

            {
                std::filesystem::path path(fs.path);
                bool disabled = !path.has_parent_path();
                if (disabled)
                {
                    ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
                    ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
                }

                if (ImGui::Button("^", layout::apply_layout(l, "up", { 0.f, 0.f, 8.f, 8.f })))
                    resolve_file_path(fs, path.parent_path().parent_path().string());

                if (disabled)
                {
                    ImGui::PopItemFlag();
                    ImGui::PopStyleVar();
                }
            }

            ImGuiInputTextFlags flags = ImGuiInputTextFlags_EnterReturnsTrue;
            auto b = layout::apply_layout(l, "path", { 0.f, 0.f, 0.f, 8.f });
            ImGui::PushItemWidth(b.x);
            ImGui::InputText("###path", fs.path_buffer.data(), fs.path_buffer.size(), flags);
            if (fs.path_active != ImGui::IsItemActive())
            {
                fs.path_active = !fs.path_active;
                if (!fs.path_active)
                    resolve_file_path(fs, fs.path_buffer.data());
            }
            
            ImGui::PopItemWidth();

            int click_state = 0;
            auto browser_rect = layout::apply_layout(l, "browser");
            auto mouse_pos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
            if (ImGui::IsMouseHoveringRect(mouse_pos, mouse_pos + browser_rect))
            {
                mouse_pos = ImGui::GetMousePos();
                if (ImGui::IsMouseClicked(ImGuiMouseButton_Left))
                    click_state = 1;

                if (ImGui::IsMouseDoubleClicked(ImGuiMouseButton_Left))
                    click_state = 2;
            }

            ImGui::PushStyleColor(ImGuiCol_ChildBg, { 0.1f, 0.1f, 0.1f, 1.0f });
            if (ImGui::BeginChild("###browser", browser_rect, true))
            {
                ImGuiTableFlags flags =
                    ImGuiTableFlags_RowBg |
                    ImGuiTableFlags_ScrollFreezeTopRow |
                    ImGuiTableFlags_ScrollY |
                    ImGuiTableFlags_Hideable |
                    ImGuiTableFlags_Sortable |
                    ImGuiTableFlags_Reorderable |
                    ImGuiTableFlags_Resizable;
                if (ImGui::BeginTable("###directories", 3, flags))
                {
                    auto sort_specs = ImGui::TableGetSortSpecs();
                    if (sort_specs != nullptr && (sort_specs->SpecsChanged || fs.needs_sort))
                    {
                        std::sort(fs.directories.begin(), fs.directories.end(), sort_function(sort_specs));
                        std::sort(fs.files.begin(), fs.files.end(), sort_function(sort_specs));
                    }

                    fs.needs_sort = false;

                    ImGui::TableSetupColumn("name", ImGuiTableColumnFlags_WidthStretch | ImGuiTableColumnFlags_DefaultSort, -1.f, 0);
                    ImGui::TableSetupColumn("date modified", ImGuiTableColumnFlags_WidthFixed, 200.f, 1);
                    ImGui::TableSetupColumn("size", ImGuiTableColumnFlags_WidthFixed, 80.f, 2);
                    ImGui::TableAutoHeaders();
                    ImGui::TableNextRow();

                    ImGui::PushStyleColor(ImGuiCol_TableRowBg, { 0.0f, 0.0f, 0.0f, 0.0f });
                    ImGui::PushStyleColor(ImGuiCol_TableRowBgAlt, { 0.0f, 0.0f, 0.0f, 0.0f });

                    int i = 0;
                    ImGui::PushStyleColor(ImGuiCol_Text, { 0.9f, 0.6f, 0.1f, 1.f });
                    for (auto const& dir : fs.directories)
                    {
                        do_row(fs, i, dir, mouse_pos, click_state);
                        ++i;
                    }

                    ImGui::PushStyleColor(ImGuiCol_Text, { 1.f, 1.f, 1.f, 1.f });
                    for (auto const& file : fs.files)
                    {
                        do_row(fs, i, file, mouse_pos, click_state);
                        ++i;
                    }

                    ImGui::PopStyleColor(4);
                    ImGui::EndTable();
                }

                ImGui::EndChild();
            }

            if (fs.mode == FileSelectorMode::Save)
            {
                ImGuiInputTextFlags flags = ImGuiInputTextFlags_EnterReturnsTrue;
                auto b = layout::apply_layout(l, "file_name", { 0.f, 8.f, 8.f, 0.f });
                ImGui::PushItemWidth(b.x);
                ImGui::InputText("###file_name", fs.name_buffer.data(), fs.name_buffer.size(), flags);
                auto active = ImGui::IsItemActive();
                if (active)
                    fs.selected_row = -1;

                if (fs.name_active != active)
                {
                    fs.name_active = active;
                    if (!active)
                        resolve_file_path(fs, format("%s%s", fs.path.c_str(), fs.name_buffer.data()));
                }

                ImGui::PopItemWidth();
            }

            if (ImGui::Button("cancel", layout::apply_layout(l, "cancel", { 0.f, 8.f, 0.f, 0.f })))
                fs.state = FileSelectorState::Cancelled;

            bool disabled = fs.selected_row < 0 && fs.mode == FileSelectorMode::Load;
            if (disabled)
            {
                ImGui::PushItemFlag(ImGuiItemFlags_Disabled, true);
                ImGui::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
            }

            if (ImGui::Button("select", layout::apply_layout(l, "select", { 0.f, 8.f, 0.f, 0.f })))
            {
                if (fs.selected_row == -1)
                    resolve_file_path(fs, format("%s%s", fs.path.c_str(), fs.name_buffer.data()));
                else if (fs.selected_row < fs.directories.size())
                    resolve_file_path(fs, format("%s%s", fs.path.c_str(), (fs.directories.at(fs.selected_row).name).c_str()));
                else
                    resolve_file_path(fs, format("%s%s", fs.path.c_str(), (fs.files.at(fs.selected_row - fs.directories.size()).name).c_str()));

                fs.selected_row = -1;
            }

            if (disabled)
            {
                ImGui::PopItemFlag();
                ImGui::PopStyleVar();
            }

            auto const& io = ImGui::GetIO();
            if (!io.WantCaptureKeyboard)
            {
                std::filesystem::path path(fs.path);
                if (path.has_parent_path() && ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_Backspace)))
                    resolve_file_path(fs, path.parent_path().parent_path().string());

                if (fs.selected_row >= 0 && ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_Enter)))
                {
                    if (fs.selected_row < fs.directories.size())
                        resolve_file_path(fs, format("%s%s", fs.path.c_str(), (fs.directories.at(fs.selected_row).name).c_str()));
                    else
                        resolve_file_path(fs, format("%s%s", fs.path.c_str(), (fs.files.at(fs.selected_row - fs.directories.size()).name).c_str()));
                }
            }

            ImGui::PopStyleColor();
        }
    }

    FileSelector::FileSelector(std::string const& p_path, FileSelectorMode p_mode, std::regex p_regex)
        : path(p_path)
        , state(FileSelectorState::Active)
        , layout()
        , path_buffer()
        , name_buffer()
        , path_active(false)
        , name_active(false)
        , selected_row(-1)
        , directories()
        , files()
        , regex(p_regex)
        , mode(p_mode)
        , needs_sort(true)
    {
        if (std::filesystem::is_directory(path) && path.compare(path.size() - 1, 1, "\\") != 0)
            path += "\\";

        strcpy_s(path_buffer.data(), path_buffer.size(), path.c_str());
        file_selector::regenerate_path(*this);
        auto& l = layout;

        layout::begin_box_v(l);
        {
            layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 9999.f, 27.f });
            layout::begin_box_h(l);
            {
                layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 28.f, 27.f });
                layout::element(l, "up");
                layout::pop_var<BoxVarType::MaxSize>(l);
                layout::element(l, "path");
            }
            layout::end_box(l);

            layout::pop_var<BoxVarType::MaxSize>(l);
            layout::element(l, "browser");

            if (mode == FileSelectorMode::Load)
            {
                layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 9999.f, 27.f });
                layout::begin_box_h(l);
                {
                    layout::element(l, "error");

                    layout::push_var<BoxVarType::MinSize>(l, ImVec2{ 80.f, 27.f });
                    layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 80.f, 27.f });
                    layout::element(l, "cancel");
                    layout::pop_var<BoxVarType::MinSize>(l);

                    layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 20.f, 27.f });
                    layout::element(l);

                    layout::push_var<BoxVarType::MinSize>(l, ImVec2{ 80.f, 27.f });
                    layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 80.f, 27.f });
                    layout::element(l, "select");
                    layout::pop_var<BoxVarType::MinSize>(l);

                    layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 20.f, 27.f });
                    layout::element(l);

                    layout::pop_var<BoxVarType::MaxSize>(l, 4);
                }
                layout::end_box(l);
                layout::pop_var<BoxVarType::MaxSize>(l);
            }
            else
            {
                layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 9999.f, 27.f });
                layout::begin_box_h(l);
                {
                    layout::element(l, "file_name");

                    layout::push_var<BoxVarType::MinSize>(l, ImVec2{ 80.f, 27.f });
                    layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 80.f, 27.f });
                    layout::element(l, "cancel");
                    layout::pop_var<BoxVarType::MinSize>(l);

                    layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 20.f, 27.f });
                    layout::element(l);

                    layout::push_var<BoxVarType::MinSize>(l, ImVec2{ 80.f, 27.f });
                    layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 80.f, 27.f });
                    layout::element(l, "select");
                    layout::pop_var<BoxVarType::MinSize>(l);

                    layout::push_var<BoxVarType::MaxSize>(l, ImVec2{ 20.f, 27.f });
                    layout::element(l);
                    layout::pop_var<BoxVarType::MaxSize>(l, 4);
                }
                layout::end_box(l);
                layout::element(l, "error");
                layout::pop_var<BoxVarType::MaxSize>(l);
            }
        }
        layout::end_box(l);
    }

    FileSelector::Entry::Entry()
        : name()
        , last_written()
        , size()
        , actual_size(0)
        , is_directory(false)
    {}
}
