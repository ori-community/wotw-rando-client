#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatingFloat.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::AnimatingFloat {
    IL2CPP_REGISTER_METHOD(0x004FBCF0, bool, Update, app::AnimatingFloat* this_ptr, float dt)
    IL2CPP_REGISTER_METHOD(0x004FBD80, bool, get_IsValueAtStart, app::AnimatingFloat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBDA0, bool, get_IsValueAtEnd, app::AnimatingFloat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBDC0, void, Serialize, app::AnimatingFloat* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x004FBE40, void, ctor, app::AnimatingFloat* this_ptr)
} // namespace app::classes::AnimatingFloat
