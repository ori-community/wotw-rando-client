#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RangeHeaderValue.h>
#include <Modloader/app/structs/ICollection_1_System_Net_Http_Headers_RangeItemHeaderValue_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Http::Headers::RangeHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D150F0, void, ctor_1, (app::RangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D15180, void, ctor_2, (app::RangeHeaderValue * this_ptr, app::RangeHeaderValue* source))
    IL2CPP_REGISTER_METHOD(0x02D15360, app::ICollection_1_System_Net_Http_Headers_RangeItemHeaderValue_*, get_Ranges, (app::RangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Unit, (app::RangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D154C0, app::Object*, ICloneable_Clone, (app::RangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D15610, bool, Equals, (app::RangeHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D15850, int32_t, GetHashCode, (app::RangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D15920, bool, TryParse, (app::String * input, app::RangeHeaderValue** parsed_value))
    IL2CPP_REGISTER_METHODINFO(0x04757020, RangeHeaderValue_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D16190, app::String*, ToString, (app::RangeHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::RangeHeaderValue
