#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/CacheControlHeaderValue.h>
#include <Modloader/app/structs/ICollection_1_System_String_.h>
#include <Modloader/app/structs/Nullable_1_TimeSpan_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::CacheControlHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D02C30, app::ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_*, get_Extensions, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CB0, app::Nullable_1_TimeSpan_, get_MaxAge, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CC0, void, set_MaxAge, (app::CacheControlHeaderValue * this_ptr, app::Nullable_1_TimeSpan_ value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_MaxStale, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_MaxStale, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01999450, app::Nullable_1_TimeSpan_, get_MaxStaleLimit, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D02D90, void, set_MaxStaleLimit, (app::CacheControlHeaderValue * this_ptr, app::Nullable_1_TimeSpan_ value))
    IL2CPP_REGISTER_METHOD(0x01CB97B0, app::Nullable_1_TimeSpan_, get_MinFresh, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D02DA0, void, set_MinFresh, (app::CacheControlHeaderValue * this_ptr, app::Nullable_1_TimeSpan_ value))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_MustRevalidate, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_MustRevalidate, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00575450, bool, get_NoCache, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575460, void, set_NoCache, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02D02DB0, app::ICollection_1_System_String_*, get_NoCacheHeaders, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575470, bool, get_NoStore, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575480, void, set_NoStore, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00448FF0, bool, get_NoTransform, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449000, void, set_NoTransform, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_OnlyIfCached, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_OnlyIfCached, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F3F9E0, bool, get_Private, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D02F10, void, set_Private, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02D02F20, app::ICollection_1_System_String_*, get_PrivateHeaders, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3F910, bool, get_ProxyRevalidate, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D03080, void, set_ProxyRevalidate, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F3F900, bool, get_Public, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D03090, void, set_Public, (app::CacheControlHeaderValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02D030A0, app::Nullable_1_TimeSpan_, get_SharedMaxAge, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D030B0, void, set_SharedMaxAge, (app::CacheControlHeaderValue * this_ptr, app::Nullable_1_TimeSpan_ value))
    IL2CPP_REGISTER_METHOD(0x02D030C0, app::Object*, ICloneable_Clone, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D037C0, bool, Equals, (app::CacheControlHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D03BC0, int32_t, GetHashCode, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D03E20, bool, TryParse, (app::String * input, app::CacheControlHeaderValue** parsed_value))
    IL2CPP_REGISTER_METHOD(0x02D04DD0, app::String*, ToString, (app::CacheControlHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CacheControlHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::CacheControlHeaderValue
