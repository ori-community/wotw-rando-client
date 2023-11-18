#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContentRangeHeaderValue.h>
#include <Modloader/app/structs/Nullable_1_Int64_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::ContentRangeHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D067B0, void, ctor, (app::ContentRangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::Nullable_1_Int64_, get_From, (app::ContentRangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_From, (app::ContentRangeHeaderValue * this_ptr, app::Nullable_1_Int64_ value))
    IL2CPP_REGISTER_METHOD(0x00CB5CB0, app::Nullable_1_Int64_, get_Length, (app::ContentRangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CC0, void, set_Length, (app::ContentRangeHeaderValue * this_ptr, app::Nullable_1_Int64_ value))
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::Nullable_1_Int64_, get_To, (app::ContentRangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_To, (app::ContentRangeHeaderValue * this_ptr, app::Nullable_1_Int64_ value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Unit, (app::ContentRangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::ContentRangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D06840, bool, Equals, (app::ContentRangeHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D06AD0, int32_t, GetHashCode, (app::ContentRangeHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D06C40, bool, TryParse, (app::String * input, app::ContentRangeHeaderValue** parsed_value))
    IL2CPP_REGISTER_METHOD(0x02D07380, app::String*, ToString, (app::ContentRangeHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::ContentRangeHeaderValue
