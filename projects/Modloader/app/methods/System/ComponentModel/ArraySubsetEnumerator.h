#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ArraySubsetEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::ArraySubsetEnumerator {
    IL2CPP_REGISTER_METHOD(0x024A01A0, void, ctor, (app::ArraySubsetEnumerator * this_ptr, app::Array* array, int32_t count))
    IL2CPP_REGISTER_METHOD(0x024A01B0, bool, MoveNext, (app::ArraySubsetEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA24A0, void, Reset, (app::ArraySubsetEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A01D0, app::Object*, get_Current, (app::ArraySubsetEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D888, ArraySubsetEnumerator_get_Current__MethodInfo)
} // namespace app::classes::System::ComponentModel::ArraySubsetEnumerator
