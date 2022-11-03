#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Http::Headers::RangeConditionHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D14520, void, ctor_1, (app::RangeConditionHeaderValue * this_ptr, app::DateTimeOffset date))
    IL2CPP_REGISTER_METHOD(0x02D145C0, void, ctor_2, (app::RangeConditionHeaderValue * this_ptr, app::EntityTagHeaderValue* entity_tag))
    IL2CPP_REGISTER_METHODINFO(0x04734210, RangeConditionHeaderValue__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D14680, app::Nullable_1_DateTimeOffset_, get_Date, (app::RangeConditionHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F2CB0, void, set_Date, (app::RangeConditionHeaderValue * this_ptr, app::Nullable_1_DateTimeOffset_ value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::EntityTagHeaderValue*, get_EntityTag, (app::RangeConditionHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_EntityTag, (app::RangeConditionHeaderValue * this_ptr, app::EntityTagHeaderValue* value))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::RangeConditionHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D146A0, bool, Equals, (app::RangeConditionHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D14820, int32_t, GetHashCode, (app::RangeConditionHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D14900, bool, TryParse, (app::String * input, app::RangeConditionHeaderValue** parsed_value))
    IL2CPP_REGISTER_METHODINFO(0x0476BA90, RangeConditionHeaderValue_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D14F60, app::String*, ToString, (app::RangeConditionHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::RangeConditionHeaderValue
