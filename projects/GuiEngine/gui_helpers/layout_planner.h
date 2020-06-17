#include <GuiEngine/gui/imgui.h>
#include <GuiEngine/gui/imgui_internal.h>

#include <string>
#include <vector>

namespace gui_engine {

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

    struct LayoutPlanner
    {
        LayoutPlanner();

        std::vector<ImRect> bounds;
        std::vector<Box> boxes;

        std::vector<int> box_stack;
        std::vector<Alignment> alignment_stack;
        std::vector<bool> fill_stack;
        std::vector<ImVec2> min_size_stack;
        std::vector<ImVec2> max_size_stack;
        std::vector<float> weight_stack;
    };

    template<BoxVarType B, typename T>
    void push_layout_var(LayoutPlanner& layout, T value) { static_assert(false, "push of this type not implemented."); }
    template<>
    void push_layout_var<BoxVarType::Alignment, Alignment>(LayoutPlanner& layout, Alignment value);
    template<>
    void push_layout_var<BoxVarType::Fill, bool>(LayoutPlanner& layout, bool value);
    template<>
    void push_layout_var<BoxVarType::MinSize, ImVec2>(LayoutPlanner& layout, ImVec2 value);
    template<>
    void push_layout_var<BoxVarType::MaxSize, ImVec2>(LayoutPlanner& layout, ImVec2 value);
    template<>
    void push_layout_var<BoxVarType::Weight, float>(LayoutPlanner& layout, float value);

    template<BoxVarType B>
    void pop_layout_var(LayoutPlanner& layout, int i = 1) { static_assert(false, "pop of this type not implemented."); }
    template<>
    void pop_layout_var<BoxVarType::Alignment>(LayoutPlanner& layout, int i);
    template<>
    void pop_layout_var<BoxVarType::Fill>(LayoutPlanner& layout, int i);
    template<>
    void pop_layout_var<BoxVarType::MinSize>(LayoutPlanner& layout, int i);
    template<>
    void pop_layout_var<BoxVarType::MaxSize>(LayoutPlanner& layout, int i);
    template<>
    void pop_layout_var<BoxVarType::Weight>(LayoutPlanner& layout, int i);

    void element(LayoutPlanner& layout, std::string const& name = {});
    void begin_box_h(LayoutPlanner& layout, std::string const& name = {});
    void begin_box_v(LayoutPlanner& layout, std::string const& name = {});
    void end_box(LayoutPlanner& layout);

    void clear(LayoutPlanner& layout);
    ImRect calculate_bounds(LayoutPlanner& layout, ImRect const& bounds);
    ImRect get_bounds(LayoutPlanner const& layout, std::string const& name, ImVec4 const& margins = { 0.f, 0.f, 0.f, 0.f });
}