#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/interception_macros.h>

IL2CPP_INTERCEPT(void, SeinDamageReciever, OnRestoreCheckpoint, app::SeinDamageReciever * this_ptr) {
    // This is set to false inside OnRestoreCheckpoint again but makes sure,
    // SeinHealthController::OnRespawn and SeinEnergy::OnRespawn are called
    // to properly initialize health and energy values after QtM or voiding
    this_ptr->fields.m_died = true;
    next::SeinDamageReciever::OnRestoreCheckpoint(this_ptr);
}
