#include <Modloader/app/methods/SeinComboHandler.h>
#include <Modloader/app/methods/SeinNestedPrefab.h>
#include <Modloader/app/methods/InstantiateUtility.h>
#include <Modloader/modloader.h>

/**
 * The vanilla game does not destroy ability prefabs immediately upon removing
 * an ability. This leads to invalid registrations in SeinComboHandler, which breaks
 * some abilities when removed and re-added in the same frame, e.g. Launch, Bow and Shuriken.
 */
namespace {
    bool force_destroy_immediately = false;

    IL2CPP_INTERCEPT(void, InstantiateUtility, Destroy_1, app::GameObject* game_object, bool non_pooled_immediate) {
        if (force_destroy_immediately) {
            non_pooled_immediate = true;
        }

        next::InstantiateUtility::Destroy_1(game_object, non_pooled_immediate);
    }

    IL2CPP_INTERCEPT(void, SeinNestedPrefab, set_IsInstantiated, app::SeinNestedPrefab* this_ptr, bool value) {
        modloader::ScopedSetter _(force_destroy_immediately, true);
        next::SeinNestedPrefab::set_IsInstantiated(this_ptr, value);
    }
}
