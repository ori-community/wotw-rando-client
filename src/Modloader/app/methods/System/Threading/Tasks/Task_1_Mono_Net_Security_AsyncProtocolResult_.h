#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_Mono_Net_Security_AsyncProtocolResult_.h>
#include <Modloader/app/structs/Task_1_Mono_Net_Security_AsyncProtocolResult_.h>

namespace app::classes::System::Threading::Tasks::Task_1_Mono_Net_Security_AsyncProtocolResult_ {
    IL2CPP_REGISTER_METHOD(
        0x0277FBD0,
        app::ConfiguredTaskAwaitable_1_Mono_Net_Security_AsyncProtocolResult_,
        ConfigureAwait,
        app::Task_1_Mono_Net_Security_AsyncProtocolResult_* this_ptr,
        bool continue_on_captured_context
    )
}
