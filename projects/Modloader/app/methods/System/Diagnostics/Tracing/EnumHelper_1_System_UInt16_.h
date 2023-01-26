#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/EmptyStruct.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_System_UInt16_ {
    IL2CPP_REGISTER_METHOD(0x02FF68C0, uint16_t, Cast_1, (bool value))
    IL2CPP_REGISTER_METHOD(0x02FF68C0, uint16_t, Cast_2, (uint8_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6990, uint16_t, Cast_3, (char16_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6A60, uint16_t, Cast_4, (app::KeyValuePair_2_System_Object_System_Object_ value))
    IL2CPP_REGISTER_METHOD(0x02FF6B30, uint16_t, Cast_5, (app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x02FF6A60, uint16_t, Cast_6, (app::DateTimeOffset value))
    IL2CPP_REGISTER_METHOD(0x02FF6A60, uint16_t, Cast_7, (app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x02FF6C00, uint16_t, Cast_8, (app::EmptyStruct value))
    IL2CPP_REGISTER_METHOD(0x02FF6CD0, uint16_t, Cast_9, (double value))
    IL2CPP_REGISTER_METHOD(0x02FF6A60, uint16_t, Cast_10, (app::Guid value))
    IL2CPP_REGISTER_METHOD(0x02FF6990, uint16_t, Cast_11, (int16_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6DA0, uint16_t, Cast_12, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6E70, uint16_t, Cast_13, (int64_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6E70, uint16_t, Cast_14, (void* value))
    IL2CPP_REGISTER_METHOD(0x02FF6E70, uint16_t, Cast_15, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02FF68C0, uint16_t, Cast_16, (int8_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6CD0, uint16_t, Cast_17, (float value))
    IL2CPP_REGISTER_METHOD(0x02FF6B30, uint16_t, Cast_18, (app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x02FF6990, uint16_t, Cast_19, (uint16_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6DA0, uint16_t, Cast_20, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6E70, uint16_t, Cast_21, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x02FF6E70, uint16_t, Cast_22, (void* value))
    IL2CPP_REGISTER_METHOD(0x02F488F0, void, cctor, ())
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_System_UInt16_
