#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AssemblyCompiledEvent {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Assembly, (app::AssemblyCompiledEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Assembly, (app::AssemblyCompiledEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_TimeTaken, (app::AssemblyCompiledEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_TimeTaken, (app::AssemblyCompiledEvent * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02E8E170, app::DatadogEvent*, GetCompatibleEvent, (app::AssemblyCompiledEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AssemblyCompiledEvent * this_ptr))
} // namespace app::classes::AssemblyCompiledEvent
