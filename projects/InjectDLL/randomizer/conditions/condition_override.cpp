#include <randomizer/conditions/condition_override.h>

#include <Il2CppModLoader/app/methods/HasAbilityCondition.h>
#include <Il2CppModLoader/app/methods/SeinAbilityCondition.h>
#include <Il2CppModLoader/app/methods/UberStateConditionWrapper.h>
#include <Il2CppModLoader/interception_macros.h>

#include <optional>
#include <unordered_map>

namespace randomizer::conditions {
    std::unordered_map<std::string, condition_intercept> intercepts;

    std::optional<bool> intercept(void* obj) {
        auto path = il2cpp::unity::get_path(obj);
        auto it = intercepts.find(path);
        if (it != intercepts.end())
            return it->second(path, obj);

        return {};
    }

    void register_condition_intercept(std::string_view path, condition_intercept callback) {
        intercepts[std::string(path)] = callback;
    }

    IL2CPP_INTERCEPT(SeinAbilityCondition, bool, Validate, (app::SeinAbilityCondition * this_ptr, app::IContext* context)) {
        auto value = intercept(this_ptr);
        return value.has_value() ? value.value() : next::SeinAbilityCondition::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(HasAbilityCondition, bool, Validate, (app::HasAbilityCondition * this_ptr, app::IContext* context)) {
        auto value = intercept(this_ptr);
        return value.has_value() ? value.value() : next::HasAbilityCondition::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(UberStateConditionWrapper, bool, Validate, (app::UberStateConditionWrapper * this_ptr, app::IContext* context)) {
        auto value = intercept(this_ptr);
        return value.has_value() ? value.value() : next::UberStateConditionWrapper::Validate(this_ptr, context);
    }

    // Add more conditions as we need them.
} // namespace randomizer::conditions
