#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Int64_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RangeItemHeaderValue.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::RangeItemHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D16450, void, ctor, app::RangeItemHeaderValue* this_ptr, app::Nullable_1_Int64_ from, app::Nullable_1_Int64_ to)
    IL2CPP_REGISTER_METHOD(0x01349560, app::Nullable_1_Int64_, get_From, app::RangeItemHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011927A0, void, set_From, app::RangeItemHeaderValue* this_ptr, app::Nullable_1_Int64_ value)
    IL2CPP_REGISTER_METHOD(0x01746A40, app::Nullable_1_Int64_, get_To, app::RangeItemHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02071D00, void, set_To, app::RangeItemHeaderValue* this_ptr, app::Nullable_1_Int64_ value)
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, app::RangeItemHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D16630, bool, Equals, app::RangeItemHeaderValue* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02D16770, int32_t, GetHashCode, app::RangeItemHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D16850, app::String*, ToString, app::RangeItemHeaderValue* this_ptr)
} // namespace app::classes::System::Net::Http::Headers::RangeItemHeaderValue
