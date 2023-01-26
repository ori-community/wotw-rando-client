#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuilderPlaceholder.h>

namespace app::classes::BuilderPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0081BCA0, bool, get_IsEventValid, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081BCE0, void, OnPlaceholderEnable, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081BFF0, void, OnPlaceholderDisable, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081C300, void, OnLookEventStay, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081C530, void, OnLookEventEnd, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004181F0, void, ctor, (app::BuilderPlaceholder * this_ptr))
} // namespace app::classes::BuilderPlaceholder
