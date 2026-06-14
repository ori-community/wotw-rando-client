#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyName.h>
#include <Modloader/app/structs/Evidence.h>
#include <Modloader/app/structs/RuntimeAssembly.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::RuntimeAssembly {
    IL2CPP_REGISTER_METHOD(0x026968D0, void, GetObjectData, app::RuntimeAssembly* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x026969C0,
        app::RuntimeAssembly*,
        LoadWithPartialNameInternal_1,
        app::String* partial_name,
        app::Evidence* security_evidence,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(
        0x02696AB0,
        app::RuntimeAssembly*,
        LoadWithPartialNameInternal_2,
        app::AssemblyName* an,
        app::Evidence* security_evidence,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x02696B00, app::AssemblyName*, GetName, app::RuntimeAssembly* this_ptr, bool copied_name)
    IL2CPP_REGISTER_METHOD(0x02280FB0, void, ctor, app::RuntimeAssembly* this_ptr)
} // namespace app::classes::System::Reflection::RuntimeAssembly
