#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharEnumerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::CharEnumerator {
    IL2CPP_REGISTER_METHOD(0x021C1000, void, ctor_1, (app::CharEnumerator * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::CharEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A3240, bool, MoveNext, (app::CharEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A32B0, void, Dispose, (app::CharEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A32D0, app::Object*, IEnumerator_get_Current, (app::CharEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739390, CharEnumerator_System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A3400, uint16_t, get_Current, (app::CharEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B9D0, CharEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A3520, void, Reset, (app::CharEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A3530, void, ctor_2, (app::CharEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735098, CharEnumerator__ctor_1__MethodInfo)
} // namespace app::classes::System::CharEnumerator
