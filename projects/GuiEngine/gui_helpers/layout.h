#pragma once

#include <GuiEngine/gui/imgui.h>
#include <GuiEngine/gui/imgui_internal.h>

#include <string>
#include <vector>

namespace gui_engine
{
    enum class BoxVarType
    {
        Alignment,
        Fill,
        MinSize,
        MaxSize,
        Weight
    };

    enum class Alignment
    {
        Left,
        Center,
        Right
    };

    enum class BoxType
    {
        Vertical,
        Horizontal,
        Element
    };

    struct Box
    {
        Box(int p_index, std::string const& p_name, BoxType p_type, Alignment p_alignment, bool p_fill, ImVec2 p_min_size, ImVec2 p_max_size, float p_weight);

        int index;
        std::string name;

        BoxType type;
        Alignment alignemnt;
        bool fill;
        ImVec2 min_size;
        ImVec2 max_size;
        float weight;

        std::vector<int> children;
    };

    struct Layout
    {
        Layout();

        std::vector<ImRect> bounds;
        std::vector<Box> boxes;

        std::vector<int> box_stack;
        std::vector<Alignment> alignment_stack;
        std::vector<bool> fill_stack;
        std::vector<ImVec2> min_size_stack;
        std::vector<ImVec2> max_size_stack;
        std::vector<float> weight_stack;
    };

    namespace layout
    {
        template<BoxVarType B, typename T>
        void push_var(Layout& layout, T value) { static_assert(false, "push of this type not implemented."); }
        template<>
        void push_var<BoxVarType::Alignment>(Layout& layout, Alignment value);
        template<>
        void push_var<BoxVarType::Fill>(Layout& layout, bool value);
        template<>
        void push_var<BoxVarType::MinSize>(Layout& layout, ImVec2 value);
        template<>
        void push_var<BoxVarType::MaxSize>(Layout& layout, ImVec2 value);
        template<>
        void push_var<BoxVarType::Weight>(Layout& layout, float value);

        template<BoxVarType B>
        void pop_var(Layout& layout, int i = 1) { static_assert(false, "pop of this type not implemented."); }
        template<>
        void pop_var<BoxVarType::Alignment>(Layout& layout, int i);
        template<>
        void pop_var<BoxVarType::Fill>(Layout& layout, int i);
        template<>
        void pop_var<BoxVarType::MinSize>(Layout& layout, int i);
        template<>
        void pop_var<BoxVarType::MaxSize>(Layout& layout, int i);
        template<>
        void pop_var<BoxVarType::Weight>(Layout& layout, int i);

        void element(Layout& layout, std::string const& name = {});
        void begin_box_h(Layout& layout, std::string const& name = {});
        void begin_box_v(Layout& layout, std::string const& name = {});
        void end_box(Layout& layout);

        void clear(Layout& layout);
        ImRect calculate_bounds(Layout& layout, ImRect const& bounds);
        ImRect get_bounds(Layout const& layout, std::string const& name, ImVec4 const& margins = { 0.f, 0.f, 0.f, 0.f });


        ImVec2 apply_layout(Layout const& l, std::string const& name, ImVec4 const& margins = { 0.f, 0.f, 0.f, 0.f });
    }
}