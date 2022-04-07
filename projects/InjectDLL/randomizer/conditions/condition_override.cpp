#include <randomizer/conditions/condition_override.h>

#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

namespace randomizer
{
    namespace condition
    {
        std::unordered_map<std::string, condition_intercept> intercepts;

        bool intercept(void* obj, bool& value)
        {
            auto path = il2cpp::unity::get_path(obj);
            auto it = intercepts.find(path);
            if (it != intercepts.end())
            {
                value = it->second(path, obj);
                return true;
            }

            return false;
        }

        void register_condition_intercept(std::string_view path, condition_intercept callback)
        {
            intercepts[std::string(path)] = callback;
        }
        
        IL2CPP_INTERCEPT(, SeinAbilityCondition, bool, Validate, (app::SeinAbilityCondition* this_ptr, app::IContext* context)) {
            bool value = false;
            if (intercept(this_ptr, value))
                return value;

            return Validate(this_ptr, context);
        }

        // Add more conditions as we need them.
    }
}
