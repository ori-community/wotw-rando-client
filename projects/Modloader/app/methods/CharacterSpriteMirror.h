#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>

namespace app::classes::CharacterSpriteMirror {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::CharacterSpriteMirror* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_Lock, app::CharacterSpriteMirror* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01313FA0, void, set_Lock, app::CharacterSpriteMirror* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01313FB0, void, set_FaceLeft, app::CharacterSpriteMirror* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_FaceLeft, app::CharacterSpriteMirror* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01313FD0, void, ToggleFacingDirection, app::CharacterSpriteMirror* this_ptr, bool force)
    IL2CPP_REGISTER_METHOD(0x01314000, void, OnAwake, app::CharacterSpriteMirror* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013141F0, void, OnDestroy, app::CharacterSpriteMirror* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013143A0, void, UpdateMaterial, app::CharacterSpriteMirror* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01314660, void, Serialize, app::CharacterSpriteMirror* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x006E35F0, void, OnRestoreCheckpoint, app::CharacterSpriteMirror* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::CharacterSpriteMirror* this_ptr)
} // namespace app::classes::CharacterSpriteMirror
