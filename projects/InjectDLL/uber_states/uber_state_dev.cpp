#include <interception_macros.h>
#include <common.h>
#include <dll_main.h>
#include <il2cpp_helpers.h>
#include <dev/dev_commands.h>
#include <dev/object_visualizer.h>
#include <uber_states/uber_state_manager.h>
#include <Common/ext.h>

#include <algorithm>
#include <array>
#include <fstream>

namespace
{
    BINDING(27776080, bool, Moon_UberStateController__ApplierIsAffectedByUberState, (app::IUberStateApplier* applier, app::IUberState* descriptor));

    void visualizer_setup(dev::Visualizer& visualizer, std::vector<dev::CommandParam> const& params, int default_level = 1, int default_depth = 200000)
    {
        int value = default_level;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "level"; });
        if (value_it != params.end())
            if (!dev::try_get_int(*value_it, value) || value < 0 || value > 3)
                dev::console_send("invalid value parameter not an int in range 0 - 3, using default level");

        visualizer.level = static_cast<dev::Visualizer::InfoLevel>(std::clamp(value, 0, 3));
        visualizer.initial_depth = -1;
        value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "level"; });
        if (value_it != params.end())
            if (!dev::try_get_int(*value_it, visualizer.initial_depth) || visualizer.initial_depth < 0)
                dev::console_send("invalid value parameter not a positive int, using default depth");

        if (visualizer.initial_depth < 0)
            visualizer.initial_depth = default_depth;
    }

    void output_visualizer(dev::Visualizer& visualizer, std::vector<dev::CommandParam> const& params)
    {
        std::ofstream str;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "file"; });
        if (value_it != params.end())
        {
            str.open(value_it->value);
        }

        if (str.is_open())
        {
            str << dev::visualize::get_string(visualizer) << std::endl;
            dev::console_send("finished writing to file.");
            str.close();
        }
        else
            dev::console_send(dev::visualize::get_string(visualizer));
    }

    bool find_state_group(std::vector<dev::CommandParam> const& params, int& state, int& group)
    {
        auto state_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "state"; });
        auto group_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "group"; });
        if (state_it == params.end())
        {
            dev::console_send("state parameter not found");
            return false;
        }

        if (group_it == params.end())
        {
            dev::console_send("group parameter not found");
            return false;
        }

        if (!dev::try_get_int(*state_it, state))
        {
            dev::console_send("invalid state parameter not an int");
            return false;
        }

        if (!dev::try_get_int(*group_it, group))
        {
            dev::console_send("invalid group parameter not an int");
            return false;
        }

        return true;
    }

    void set_us_bool(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        bool value = false;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "value"; });
        if (value_it == params.end())
        {
            dev::console_send("value parameter not found");
            return;
        }

        if (!dev::try_get_bool(*value_it, value))
        {
            dev::console_send("invalid value parameter not a bool");
            return;
        }

        uber_states::set_uber_state_value(state, group, static_cast<float>(value));
    }

    void set_us_int(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        int value = 0;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "value"; });
        if (value_it == params.end())
        {
            dev::console_send("value parameter not found");
            return;
        }

        if (!dev::try_get_int(*value_it, value))
        {
            dev::console_send("invalid value parameter not an int");
            return;
        }

        uber_states::set_uber_state_value(state, group, static_cast<float>(value));
    }

    void check_appliers(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        auto uber_state_controller = il2cpp::get_class<app::UberStateController__Class>("Moon", "UberStateController");
        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        auto state_id = uber_states::create_uber_id(state);
        auto group_id = uber_states::create_uber_id(group);
        auto uber_state = uber_states::get_uber_state(group_id, state_id);
        if (uber_state == nullptr)
        {
            dev::console_send("uber_state not found");
            return;
        }

        dev::Visualizer visualizer;
        visualizer_setup(visualizer, params, 1, 1);

        auto list = uber_state_controller->static_fields->AllStateAppliers;
        for (auto i = 0; i < list->fields._size; ++i)
        {
            auto item = list->fields._items->vector[i];
            if (Moon_UberStateController__ApplierIsAffectedByUberState(item, uber_state))
                dev::visualize::visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item));
        }

        output_visualizer(visualizer, params);
    }

    void check_all_appliers(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        auto uber_state_controller = il2cpp::get_class<app::UberStateController__Class>("Moon", "UberStateController");
        dev::Visualizer visualizer;
        visualizer_setup(visualizer, params, 1, 1);

        dev::console_send("start visualizing.");
        auto list = uber_state_controller->static_fields->AllStateAppliers;
        for (auto i = 0; i < list->fields._size; ++i)
        {
            dev::console_send(format("visualizing applier (%d / %d)", i + 1, list->fields._size));
            dev::console_flush();

            auto item = list->fields._items->vector[i];
            dev::visualize::visualize_object(visualizer, item);
        }

        dev::console_send("finished visualizing, outputting.\n");
        output_visualizer(visualizer, params);
    }

    void dump_scene(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        dev::Visualizer visualizer;
        visualizer_setup(visualizer, params);

        auto count = il2cpp::unity::get_scene_count();
        dev::console_send("start visualizing.");
        for (auto i = 0; i < count; ++i)
        {
            dev::console_send(format("visualizing scene (%d / %d)", i + 1, count));
            dev::console_flush();

            auto scene = il2cpp::unity::get_scene_at(i);
            dev::visualize::visualize_scene(visualizer, scene);
        }

        dev::console_send("finished visualizing, outputting.\n");
        output_visualizer(visualizer, params);
    }

    void add_uber_state_commands()
    {
        dev::register_command("set_us_bool", set_us_bool);
        dev::register_command("set_us_int", set_us_int);
        dev::register_command("check_appliers", check_appliers);
        dev::register_command("check_all_appliers", check_all_appliers);
        dev::register_command("dump_scene", dump_scene);
    }

    CALL_ON_INIT(add_uber_state_commands);
}
