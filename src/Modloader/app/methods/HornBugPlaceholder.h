#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HornBugPlaceholder.h>

namespace app::classes::HornBugPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00B6D360, void, Spawn, app::HornBugPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsUsingVariations, app::HornBugPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6D490, void, ctor, app::HornBugPlaceholder* this_ptr)
} // namespace app::classes::HornBugPlaceholder
