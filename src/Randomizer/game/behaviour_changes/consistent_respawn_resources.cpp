#include <Common/scope_utils.h>
#include <Modloader/app/methods/InstantiateUtility.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/interception_macros.h>


namespace {
    auto prevent_instantiating_respawn_effect = false;

    IL2CPP_INTERCEPT_WITH_ORDER(0, app::GameObject*, InstantiateUtility, InstantiateImmediate_4, app::GameObject* original, app::Vector3 position, app::Quaternion rotation, app::Object_1* owner, bool record) {
        if (prevent_instantiating_respawn_effect) {
            return nullptr;
        }

        return next::InstantiateUtility::InstantiateImmediate_4(original, position, rotation, owner, record);
    }

    IL2CPP_INTERCEPT(void, SeinDamageReciever, OnRestoreCheckpoint, app::SeinDamageReciever * this_ptr) {
        // This is set to false inside OnRestoreCheckpoint again but makes sure,
        // SeinHealthController::OnRespawn and SeinEnergy::OnRespawn are called
        // to properly initialize health and energy values after QtM or voiding
        this_ptr->fields.m_died = true;
        common::ScopedSetter _(prevent_instantiating_respawn_effect, true);
        next::SeinDamageReciever::OnRestoreCheckpoint(this_ptr);
    }
}
