#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::InteropServices::HandleCollector {
    IL2CPP_REGISTER_METHOD(0x021BBD50, void, ctor_1, (app::HandleCollector * this_ptr, app::String* name, int32_t initial_threshold))
    IL2CPP_REGISTER_METHOD(0x021BBE70, void, ctor_2, (app::HandleCollector * this_ptr, app::String* name, int32_t initial_threshold, int32_t maximum_threshold))
    IL2CPP_REGISTER_METHODINFO(0x0475B380, HandleCollector__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Count, (app::HandleCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_InitialThreshold, (app::HandleCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_MaximumThreshold, (app::HandleCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::HandleCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021BC030, void, Add, (app::HandleCollector * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767A00, HandleCollector_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021BC360, void, Remove, (app::HandleCollector * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A7E0, HandleCollector_Remove__MethodInfo)
} // namespace app::classes::System::Runtime::InteropServices::HandleCollector
