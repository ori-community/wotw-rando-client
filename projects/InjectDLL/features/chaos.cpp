#include <features/chaos.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

#include <vector>

namespace
{
    constexpr double CHAOS_TRIGGER_MIN = 30.0f;
    constexpr double CHAOS_TRIGGER_MAX = 60.0f;

    bool chaos_mode = false;
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

    double gen_random_value()
    {
        auto r = rand();
        return static_cast<double>(RAND_MAX) / r;
    }

    void trigger_chaos()
    {
        float random_value = static_cast<float>(CHAOS_TRIGGER_MIN + gen_random_value() * (CHAOS_TRIGGER_MAX - CHAOS_TRIGGER_MIN));
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
        if (!chaos_mode)
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

    void initialize()
    {
        add_handler({ 1.0, teleport_to_random_anchor });
        add_handler({ 1.0, take_damage });
        // TODO: Add more handlers.
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT void set_chaos_mode(bool value)
{
    chaos_mode = value;
    if (chaos_mode)
        next_chaos_trigger = CHAOS_TRIGGER_MIN + rand() * (CHAOS_TRIGGER_MAX - CHAOS_TRIGGER_MIN);
}

INJECT_C_DLLEXPORT bool get_chaos_mode()
{
    return chaos_mode;
}
