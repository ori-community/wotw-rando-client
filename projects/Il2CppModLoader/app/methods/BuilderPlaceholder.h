#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BuilderPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0081BCA0, bool, get_IsEventValid, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081BCE0, void, OnPlaceholderEnable, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081BFF0, void, OnPlaceholderDisable, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081C300, void, OnLookEventStay, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FB80, BuilderPlaceholder_OnLookEventStay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0081C530, void, OnLookEventEnd, (app::BuilderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765A00, BuilderPlaceholder_OnLookEventEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004181F0, void, ctor, (app::BuilderPlaceholder * this_ptr))
}
