#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/MonoTlsProvider.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_ {
    IL2CPP_REGISTER_METHOD(0x0283B9A0, bool, ContainsKey, app::Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_* this_ptr, app::Guid key)
    IL2CPP_REGISTER_METHOD(
        0x0283B670,
        void,
        Add,
        app::Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_* this_ptr,
        app::Guid key,
        app::MonoTlsProvider* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283D820,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_* this_ptr,
        app::Guid key,
        app::MonoTlsProvider** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Guid_Mono_Security_Interface_MonoTlsProvider_
