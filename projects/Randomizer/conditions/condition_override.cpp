#include <Randomizer/conditions/condition_override.h>

#include <Modloader/app/methods/HasAbilityCondition.h>
#include <Modloader/app/methods/SeinAbilityCondition.h>
#include <Modloader/app/methods/UberStateConditionWrapper.h>
#include <Modloader/app/methods/VisibleOnWorldMap.h>
#include <Modloader/app/methods/PlayerInsideZoneChecker.h>
#include <Modloader/app/methods/UberStateValueCondition.h>
#include <Modloader/interception_macros.h>

#include <optional>
#include <unordered_map>

namespace randomizer::conditions {
    std::unordered_map<ConditionType, std::unordered_map<std::string, condition_intercept>> intercepts;

    std::optional<bool> intercept(const ConditionType type, void* obj) {
        const auto path = il2cpp::unity::get_path(obj);
        const auto& condition_intercepts = intercepts[type];
        const auto it = condition_intercepts.find(path);
        return it != condition_intercepts.end() ? it->second(path, obj) : std::optional<bool>();
    }

    void register_condition_intercept(ConditionType type, const std::string_view path, const condition_intercept callback) {
        intercepts[type][std::string(path)] = callback;
    }

    IL2CPP_INTERCEPT(bool, SeinAbilityCondition, Validate, app::SeinAbilityCondition * this_ptr, app::IContext* context) {
        const auto value = intercept(ConditionType::SeinAbilityCondition, this_ptr);
        return value.has_value() ? value.value() : next::SeinAbilityCondition::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(bool, HasAbilityCondition, Validate, app::HasAbilityCondition * this_ptr, app::IContext* context) {
        const auto value = intercept(ConditionType::HasAbilityCondition, this_ptr);
        return value.has_value() ? value.value() : next::HasAbilityCondition::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(bool, UberStateConditionWrapper, Validate, app::UberStateConditionWrapper * this_ptr, app::IContext* context) {
        const auto value = intercept(ConditionType::UberStateConditionWrapper, this_ptr);
        return value.has_value() ? value.value() : next::UberStateConditionWrapper::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(bool, UberStateValueCondition, Validate, app::UberStateValueCondition * this_ptr, app::IContext* context) {
        const auto value = intercept(ConditionType::UberStateValueCondition, this_ptr);
        return value.has_value() ? value.value() : next::UberStateValueCondition::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(bool, PlayerInsideZoneChecker, Validate, app::PlayerInsideZoneChecker * this_ptr, app::IContext* context) {
        const auto value = intercept(ConditionType::PlayerInsideZoneChecker, this_ptr);
        return value.has_value() ? value.value() : next::PlayerInsideZoneChecker::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(bool, VisibleOnWorldMap, get_MeetsRevealCondition, app::VisibleOnWorldMap* this_ptr) {
        const auto value = intercept(ConditionType::VisibleOnWorldMap, this_ptr);
        return value.has_value() ? value.value() : next::VisibleOnWorldMap::get_MeetsRevealCondition(this_ptr);
    }

    IL2CPP_INTERCEPT(bool, VisibleOnWorldMap, ShouldRevealWhenOnScreen, app::VisibleOnWorldMap* this_ptr) {
        const auto value = intercept(ConditionType::VisibleOnWorldMap, this_ptr);
        return value.has_value() ? value.value() : next::VisibleOnWorldMap::ShouldRevealWhenOnScreen(this_ptr);
    }

    // Add more conditions as we need them.
} // namespace randomizer::conditions
