#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinInvisibilitySpell.h>

namespace app::classes::SeinInvisibilitySpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010155B0, void, OnSetReferenceToSein, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010155F0, void, OnDestroy, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_IsInvisible, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01015630, void, Start, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010156D0, void, UpdateCharacterState, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01015940, void, StartInvisibility, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01015D30, void, EndInvisibility, app::SeinInvisibilitySpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01016050, void, ctor, app::SeinInvisibilitySpell* this_ptr)
} // namespace app::classes::SeinInvisibilitySpell
