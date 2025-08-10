#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HandleCollector.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::InteropServices::HandleCollector {
    IL2CPP_REGISTER_METHOD(0x021BBD50, void, ctor_1, app::HandleCollector* this_ptr, app::String* name, int32_t initial_threshold)
    IL2CPP_REGISTER_METHOD(0x021BBE70, void, ctor_2, app::HandleCollector* this_ptr, app::String* name, int32_t initial_threshold, int32_t maximum_threshold)
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Count, app::HandleCollector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_InitialThreshold, app::HandleCollector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_MaximumThreshold, app::HandleCollector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, app::HandleCollector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021BC030, void, Add, app::HandleCollector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021BC360, void, Remove, app::HandleCollector* this_ptr)
} // namespace app::classes::System::Runtime::InteropServices::HandleCollector
