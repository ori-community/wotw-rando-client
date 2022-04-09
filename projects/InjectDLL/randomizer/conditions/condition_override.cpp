#include <randomizer/conditions/condition_override.h>

#include <Il2CppModLoader/interception_macros.h>

#include <optional>
#include <unordered_map>

namespace randomizer
{
    namespace conditions
    {
        std::unordered_map<std::string, condition_intercept> intercepts;

        std::optional<bool> intercept(void* obj)
        {
            auto path = il2cpp::unity::get_path(obj);
            auto it = intercepts.find(path);
            if (it != intercepts.end())
                return it->second(path, obj);

            return std::optional<bool>();
        }

        void register_condition_intercept(std::string_view path, condition_intercept callback)
        {
            intercepts[std::string(path)] = callback;
        }
        
        IL2CPP_INTERCEPT(, SeinAbilityCondition, bool, Validate, (app::SeinAbilityCondition* this_ptr, app::IContext* context)) {
            auto value = intercept(this_ptr);
            return value.has_value() ? value.value() : Validate(this_ptr, context);
        }

        IL2CPP_INTERCEPT(, HasAbilityCondition, bool, Validate, (app::SeinAbilityCondition* this_ptr, app::IContext* context)) {
            auto value = intercept(this_ptr);
            return value.has_value() ? value.value() : Validate(this_ptr, context);
        }

        IL2CPP_INTERCEPT(, UberStateConditionWrapper, bool, Validate, (app::SeinAbilityCondition* this_ptr, app::IContext* context)) {
            auto value = intercept(this_ptr);
            return value.has_value() ? value.value() : Validate(this_ptr, context);
        }

        // Add more conditions as we need them.
    }
}
