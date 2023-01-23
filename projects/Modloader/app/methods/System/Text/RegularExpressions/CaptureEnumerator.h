#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CaptureEnumerator.h>
#include <Modloader/app/structs/CaptureCollection.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Capture.h>

namespace app::classes::System::Text::RegularExpressions::CaptureEnumerator {
    IL2CPP_REGISTER_METHOD(0x01DC2A00, void, ctor, (app::CaptureEnumerator * this_ptr, app::CaptureCollection* rcc))
    IL2CPP_REGISTER_METHOD(0x02581220, bool, MoveNext, (app::CaptureEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02581260, app::Object*, get_Current, (app::CaptureEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02581260, app::Capture*, get_Capture, (app::CaptureEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047052E8, CaptureEnumerator_get_Capture__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (app::CaptureEnumerator * this_ptr))
} // namespace app::classes::System::Text::RegularExpressions::CaptureEnumerator
