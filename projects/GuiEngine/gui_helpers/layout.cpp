#include <gui_helpers/layout.h>

#include <algorithm>
#include <tuple>

namespace gui_engine
{
    Box::Box(int p_index, std::string const& p_name, BoxType p_type, Alignment p_alignment, bool p_fill, ImVec2 p_min_size, ImVec2 p_max_size, float p_weight)
        : index(p_index)
        , name(p_name)
        , type(p_type)
        , alignemnt(p_alignment)
        , fill(p_fill)
        , min_size(p_min_size)
        , max_size(p_max_size)
        , weight(p_weight)
        , children()
    {}

    Layout::Layout()
        : bounds()
        , boxes()
        , box_stack{}
        , alignment_stack{ Alignment::Left }
        , fill_stack{ true }
        , min_size_stack{ { 0.f, 0.f } }
        , max_size_stack{ { 99999.f, 99999.f } }
        , weight_stack{ 1.0f }
    {}

    namespace layout
    {
        template<>
        void push_var<BoxVarType::Alignment>(Layout& layout, Alignment value)
        {
            layout.alignment_stack.push_back(value);
        }

        template<>
        void push_var<BoxVarType::Fill>(Layout& layout, bool value)
        {
            layout.fill_stack.push_back(value);
        }

        template<>
        void push_var<BoxVarType::MinSize>(Layout& layout, ImVec2 value)
        {
            layout.min_size_stack.push_back(value);
        }

        template<>
        void push_var<BoxVarType::MaxSize>(Layout& layout, ImVec2 value)
        {
            layout.max_size_stack.push_back(value);
        }

        template<>
        void push_var<BoxVarType::Weight>(Layout& layout, float value)
        {
            layout.weight_stack.push_back(value);
        }

        template<>
        void pop_var<BoxVarType::Alignment>(Layout& layout, int i)
        {
            assert(layout.alignment_stack.size() > i);
            while (i > 0)
            {
                layout.alignment_stack.pop_back();
                --i;
            }
        }

        template<>
        void pop_var<BoxVarType::Fill>(Layout& layout, int i)
        {
            assert(layout.fill_stack.size() > i);
            while (i > 0)
            {
                layout.fill_stack.pop_back();
                --i;
            }
        }

        template<>
        void pop_var<BoxVarType::MinSize>(Layout& layout, int i)
        {
            assert(layout.min_size_stack.size() > i);
            while (i > 0)
            {
                layout.min_size_stack.pop_back();
                --i;
            }
        }

        template<>
        void pop_var<BoxVarType::MaxSize>(Layout& layout, int i)
        {
            assert(layout.max_size_stack.size() > i);
            while (i > 0)
            {
                layout.max_size_stack.pop_back();
                --i;
            }
        }

        template<>
        void pop_var<BoxVarType::Weight>(Layout& layout, int i)
        {
            assert(layout.weight_stack.size() > i);
            while (i > 0)
            {
                layout.weight_stack.pop_back();
                --i;
            }
        }

        int add_box(Layout& layout, BoxType type, std::string const& name)
        {
            assert(!(layout.box_stack.size() == 0 && layout.boxes.size() > 0));
            Box box(
                static_cast<int>(layout.boxes.size()),
                name,
                type,
                layout.alignment_stack.back(),
                layout.fill_stack.back(),
                layout.min_size_stack.back(),
                layout.max_size_stack.back(),
                layout.weight_stack.back()
            );

            layout.boxes.push_back(box);
            if (!layout.box_stack.empty())
                layout.boxes[layout.box_stack.back()].children.push_back(box.index);

            return box.index;
        }

        void element(Layout& layout, std::string const& name)
        {
            add_box(layout, BoxType::Element, name);
        }

        void begin_box_h(Layout& layout, std::string const& name)
        {
            auto i = add_box(layout, BoxType::Horizontal, name);
            layout.box_stack.push_back(i);
        }

        void begin_box_v(Layout& layout, std::string const& name)
        {
            auto i = add_box(layout, BoxType::Vertical, name);
            layout.box_stack.push_back(i);
        }

        void end_box(Layout& layout)
        {
            layout.box_stack.pop_back();
        }

        void clear(Layout& layout)
        {
            layout.bounds.clear();
            layout.boxes.clear();
        }

        void update_size_members(Layout& layout, Box& box)
        {
            if (box.type == BoxType::Element)
                return;

            auto weight_dir = box.type == BoxType::Horizontal;
            auto child_min_size = ImVec2{ 0.f, 0.f };
            for (auto& child : box.children)
            {
                auto& child_box = layout.boxes[child];
                update_size_members(layout, child_box);
                if (weight_dir)
                {
                    child_min_size.x += child_box.min_size.x;
                    child_min_size.y = std::max(child_min_size.y, child_box.min_size.y);
                }
                else
                {
                    child_min_size.x = std::max(child_min_size.x, child_box.min_size.x);
                    child_min_size.y += child_box.min_size.y;
                }
            }

            box.min_size.x = std::max(child_min_size.x, box.min_size.x);
            box.min_size.y = std::max(child_min_size.y, box.min_size.y);
        }

        void calculate_weighted_space(Layout& layout, ImRect const& bounds)
        {
            auto& root = layout.boxes.front();
            layout.bounds.clear();
            layout.bounds.resize(layout.boxes.size());
            std::vector<int> active_stack;
            auto size = bounds.GetSize();
            size.x = std::max(size.x, root.min_size.x);
            size.y = std::max(size.y, root.min_size.y);
            layout.bounds[0] = { bounds.Min, bounds.Min + size };
            if (root.type != BoxType::Element)
                active_stack.push_back(0);

            while (!active_stack.empty())
            {
                auto active_id = active_stack.front();
                auto& current_box = layout.boxes[active_id];
                auto current_rect = layout.bounds[active_id];
                auto current_size = current_rect.GetSize();

                auto weight_dir = current_box.type == BoxType::Horizontal;

                auto size_balance = current_box.type == BoxType::Horizontal ? current_size.x : current_size.y;
                auto full_weight = 0.f;

                for (auto& child : current_box.children)
                {
                    auto& child_box = layout.boxes[child];
                    auto child_size = child_box.min_size;
                    full_weight += child_box.weight;
                    size_balance -= weight_dir ? child_size.x : child_size.y;
                    if (child_box.fill)
                    {
                        auto& non_weight = weight_dir ? child_size.y : child_size.x;
                        auto bound = weight_dir ? current_rect.GetHeight() : current_rect.GetWidth();
                        if (bound > non_weight)
                            non_weight = bound;
                    }

                    child_size.x = std::min(child_size.x, child_box.max_size.x);
                    child_size.y = std::min(child_size.y, child_box.max_size.y);
                    layout.bounds[child] = { current_rect.Min, current_rect.Min + child_size };
                    if (child_box.type != BoxType::Element)
                        active_stack.push_back(child);
                }

                auto fill_children = current_box.children;
                while (size_balance > 0.f && !fill_children.empty())
                {
                    std::vector<int> new_fill_children;
                    auto new_balance = 0.f;
                    auto new_weight = 0.f;
                    for (auto& child : fill_children)
                    {
                        auto& child_box = layout.boxes[child];
                        auto& child_rect = layout.bounds[child];
                        auto& pos_value = weight_dir ? child_rect.Min.x : child_rect.Min.y;
                        auto& weight_value = weight_dir ? child_rect.Max.x : child_rect.Max.y;
                        auto const& max_value = weight_dir ? child_box.max_size.x : child_box.max_size.y;

                        auto const withdrawn = size_balance * (child_box.weight / full_weight);
                        weight_value += withdrawn;
                        if ((weight_value - pos_value) > max_value)
                        {
                            auto const remainder = (weight_value - pos_value) - max_value;
                            weight_value = pos_value + max_value;
                            new_balance += remainder;
                        }
                        else
                        {
                            new_weight += child_box.weight;
                            new_fill_children.push_back(child);
                        }
                    }

                    fill_children = new_fill_children;
                    size_balance = new_balance;
                    full_weight = new_weight;
                }

                active_stack.erase(active_stack.begin());
            }
        }

        void update_bounds(Layout& layout, Box& box)
        {
            if (box.type == BoxType::Element)
                return;

            auto weight_dir = box.type == BoxType::Horizontal;
            auto child_size_sum = ImVec2{ 0.f, 0.f };
            for (auto& child : box.children)
            {
                auto& child_box = layout.boxes[child];
                update_bounds(layout, child_box);

                auto& child_size = layout.bounds[child].GetSize();
                if (weight_dir)
                {
                    child_size_sum.x += child_size.x;
                    child_size_sum.y = std::max(child_size_sum.y, child_size.y);
                }
                else
                {
                    child_size_sum.x = std::max(child_size_sum.x, child_size.x);
                    child_size_sum.y += child_size.y;
                }
            }

            auto& rect = layout.bounds[box.index];
            auto size = layout.bounds[box.index].GetSize();
            size.x = std::max(child_size_sum.x, size.x);
            size.y = std::max(child_size_sum.y, size.y);
            rect.Max = rect.Min + size;
        }

        void update_positions(Layout& layout)
        {
            // TODO: Handle alignment here (alignment affects direct children).

            std::vector<int> active_stack;
            active_stack.push_back(0);
            while (!active_stack.empty())
            {
                auto const active_id = active_stack.front();
                auto const& current_box = layout.boxes[active_id];
                auto const& current_rect = layout.bounds[active_id];
                auto const current_size = current_rect.GetSize();
                auto const weight_dir = current_box.type == BoxType::Horizontal;

                auto cursor = current_rect.Min;
                for (auto const& child : current_box.children)
                {
                    auto const& child_box = layout.boxes[child];
                    auto& child_rect = layout.bounds[child];
                    auto const child_size = child_rect.GetSize();

                    child_rect.Min = cursor;
                    child_rect.Max = cursor + child_size;
                    if (weight_dir)
                        cursor.x += child_size.x;
                    else
                        cursor.y += child_size.y;

                    if (child_box.type != BoxType::Element)
                        active_stack.push_back(child);
                }

                active_stack.erase(active_stack.begin());
            }
        }

        ImRect calculate_bounds(Layout& layout, ImRect const& bounds)
        {
            assert(layout.boxes.size() > 0);
            assert(layout.box_stack.size() == 0);
            assert(layout.alignment_stack.size() == 1);
            assert(layout.fill_stack.size() == 1);
            assert(layout.min_size_stack.size() == 1);
            assert(layout.max_size_stack.size() == 1);
            assert(layout.weight_stack.size() == 1);

            update_size_members(layout, layout.boxes.front());

            // Initial pass: Calculate using weights and min_size until you hit max size or run out of space.
            calculate_weighted_space(layout, bounds);

            // We can leave early if this is the case.
            if (layout.boxes.front().type == BoxType::Element)
                return layout.bounds[0];

            // Second pass: Resize boxes bottom up, make parents big enough to hold the children.
            update_bounds(layout, layout.boxes.front());

            // Third pass: Move boxes based on size and parent box type.
            update_positions(layout);

            return bounds;
        }

        ImRect get_bounds(Layout const& layout, std::string const& name, ImVec4 const& margins)
        {
            auto it = std::find_if(layout.boxes.begin(), layout.boxes.end(), [&name](auto const& box) -> bool { return box.name == name; });
            assert(it != layout.boxes.end());

            auto rect = layout.bounds.at(it->index);
            rect.Min += ImVec2{ margins.x, margins.y };
            rect.Max -= ImVec2{ margins.z, margins.w };
            return rect;
        }
    }
}
