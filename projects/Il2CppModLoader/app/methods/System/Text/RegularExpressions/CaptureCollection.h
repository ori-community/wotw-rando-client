#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::CaptureCollection {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_SyncRoot, (app::CaptureCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::CaptureCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::CaptureCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02580C10, app::Capture *, get_Item, (app::CaptureCollection * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02580C20, void, CopyTo, (app::CaptureCollection * this_ptr, app::Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x0470D680, CaptureCollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02580D20, app::IEnumerator *, GetEnumerator, (app::CaptureCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02580E70, app::Capture *, GetCapture, (app::CaptureCollection * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHODINFO(0x04787410, CaptureCollection_GetCapture__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025811F0, void, ctor, (app::CaptureCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E520, CaptureCollection__ctor__MethodInfo)
}
