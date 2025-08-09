#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MonoAssemblyName.h>
#include <Modloader/app/structs/SafeStringMarshal.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::Mono::RuntimeMarshal {
    IL2CPP_REGISTER_METHOD(0x023CEA70, app::String*, PtrToUtf8String, void* ptr)
    IL2CPP_REGISTER_METHOD(0x023CEB70, app::SafeStringMarshal, MarshalString, app::String* str)
    IL2CPP_REGISTER_METHOD(0x023CEB90, int32_t, DecodeBlobSize, void* in_ptr, void** out_ptr)
    IL2CPP_REGISTER_METHOD(0x023CEBF0, app::Byte__Array*, DecodeBlobArray, void* ptr)
    IL2CPP_REGISTER_METHOD(0x023CED20, int32_t, AsciHexDigitValue, int32_t c)
    IL2CPP_REGISTER_METHOD(0x023CED40, void, FreeAssemblyName, app::MonoAssemblyName* name, bool free_struct)
} // namespace app::classes::Mono::RuntimeMarshal
