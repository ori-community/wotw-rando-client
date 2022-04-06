#include <constants.h>
#include <game/game.h>
#include <game/player.h>
#include <features/chaos.h>
#include <randomizer/messages.h>
#include <uber_states/uber_state_manager.h>
#include <randomizer/timer.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <cmath>
#include <vector>

namespace
{
    int chaos_text_box_id = -1;
    float chaos_counter = 0.0f;
    float next_chaos_trigger = 0.0f;
    
    using chaos_handler = void(*)();
    struct ChaosHandler
    {
        double weight;
        chaos_handler callback;
    };

    double total_weight = 0.0;
    std::vector<ChaosHandler> handlers;

    int current_text_box_timer = -1;
    void hide_text(float extra_delta, void* params)
    {
        text_box_visibility(chaos_text_box_id, false);
        current_text_box_timer = -1;
    }

    void show_text(std::string_view text, float duration = 3.0f)
    {
        if (chaos_text_box_id < 0)
        {
            chaos_text_box_id = reserve_id();
            text_box_create(chaos_text_box_id, 0.25f, 0.25f, false, false);
            text_box_position(chaos_text_box_id, 0.0f, 1.0f, 0.0f, false);
        }

        text_box_text(chaos_text_box_id, convert_string_to_wstring(text).c_str());
        text_box_visibility(chaos_text_box_id, true);
        if (current_text_box_timer < 0)
            timer::deregister_timer(current_text_box_timer);

        current_text_box_timer = timer::register_timer(&hide_text, duration);
    }

    double gen_random_value()
    {
        auto r = rand();
        return r / static_cast<double>(RAND_MAX);
    }

    double gen_random_value(double min, double max)
    {
        return min + gen_random_value() * (max - min);
    }

    void trigger_chaos()
    {
        float random_value = gen_random_value(
            uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, CHAOS_TRIGGER_MIN_ID),
            uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, CHAOS_TRIGGER_MAX_ID)
        );
        next_chaos_trigger += random_value;
        double i = gen_random_value() * total_weight;
        for (auto handler : handlers)
        {
            i -= handler.weight;
            if (i < 0.0)
            {
                handler.callback();
                break;
            }
        }
    }

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    IL2CPP_INTERCEPT(, GameController, void, Update, (app::GameController* this_ptr)) {
        GameController::Update(this_ptr);

        if (game::is_paused() || uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, CHAOS_MODE_ID) < 0.5)
            return;

        next_chaos_trigger -= TimeUtility::get_deltaTime();
        if (next_chaos_trigger < 0.0f)
            trigger_chaos();
    }

    void add_handler(ChaosHandler handler)
    {
        total_weight += handler.weight;
        handlers.emplace_back(handler);
    }

    void teleport_to_random_anchor()
    {
        // TODO: Implement this.
    }

    void take_damage()
    {
        // TODO: Implement this.
    }

    int last_sling = -1;
    void stop_sling(float extra_delta, void* params)
    {
        uber_states::set_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, FORCE_AIR_NO_DECELERATION_ID, 0.0);
        last_sling = -1;
    }

    constexpr double SLING_POWER = 160.0;
    void sling()
    {
        if (last_sling != -1)
            timer::deregister_timer(last_sling);

        auto sein = game::player::sein();
        if (sein != nullptr)
        {
            auto value = gen_random_value() * 2 * PI;
            app::Vector3 speed;
            speed.x = static_cast<float>(std::cos(value) * SLING_POWER);
            speed.y = static_cast<float>(std::sin(value) * SLING_POWER);
            speed.z = 0.0f;
            sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed = speed;
            uber_states::set_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, FORCE_AIR_NO_DECELERATION_ID, 1.0);
            last_sling = timer::register_timer(&stop_sling, 1.0f);
            show_text("Chaos: Slinging");
        }
    }

    void initialize()
    {
        //add_handler({ 1.0, teleport_to_random_anchor });
        //add_handler({ 1.0, take_damage });
        add_handler({ 1.0, sling });
        // TODO: Add more handlers.
    }

    CALL_ON_INIT(initialize);
}
