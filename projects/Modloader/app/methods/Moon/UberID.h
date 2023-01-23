#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::UberID {
    IL2CPP_REGISTER_METHOD(0x01B66E50, void, ctor_1, (app::UberID * this_ptr, app::String* guid))
    IL2CPP_REGISTER_METHOD(0x01B67010, void, ctor_2, (app::UberID * this_ptr, uint16_t b))
    IL2CPP_REGISTER_METHOD(0x01B67020, void, ctor_3, (app::UberID * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_IntID, (app::UberID * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B67060, uint16_t, get_ID, (app::UberID * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B67070, bool, get_IsInitialized, (app::UberID * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int64_t, get_Size, ())
    IL2CPP_REGISTER_METHOD(0x01B67080, app::String*, ToString, (app::UberID * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B67130, bool, Equals, (app::UberID * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (app::UberID * this_ptr))
} // namespace app::classes::Moon::UberID
