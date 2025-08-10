#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/CultureInfo_Data.h>
#include <Modloader/app/structs/CultureInfo__Array.h>
#include <Modloader/app/structs/CultureTypes__Enum.h>
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextInfo.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Globalization::CultureInfo {
    IL2CPP_REGISTER_METHOD(0x025F5100, app::CultureInfo*, get_InvariantCulture, )
    IL2CPP_REGISTER_METHOD(0x025F51B0, app::CultureInfo*, get_CurrentCulture, )
    IL2CPP_REGISTER_METHOD(0x025F51E0, app::CultureInfo*, get_CurrentUICulture, )
    IL2CPP_REGISTER_METHOD(0x025F5210, app::CultureInfo*, ConstructCurrentCulture, )
    IL2CPP_REGISTER_METHOD(0x025F5450, app::CultureInfo*, ConstructCurrentUICulture, )
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String*, get_Territory, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_LCID, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_Name, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F54E0, app::Calendar*, get_Calendar, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F55B0, app::CultureInfo*, get_Parent, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F5B00, app::TextInfo*, get_TextInfo, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F5D70, app::Object*, Clone, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F6020, bool, Equals, app::CultureInfo* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x025F6140, app::CultureInfo__Array*, GetCultures, app::CultureTypes__Enum types)
    IL2CPP_REGISTER_METHOD(0x025F6680, app::CultureInfo_Data, GetTextInfoData, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, GetHashCode, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F66A0, app::CultureInfo*, ReadOnly, app::CultureInfo* ci)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, ToString, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F6990, app::CompareInfo*, get_CompareInfo, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F6BE0, bool, get_IsNeutralCulture, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckNeutral, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F6C20, app::NumberFormatInfo*, get_NumberFormat, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F6DB0, void, set_NumberFormat, app::CultureInfo* this_ptr, app::NumberFormatInfo* value)
    IL2CPP_REGISTER_METHOD(0x025F6F00, app::DateTimeFormatInfo*, get_DateTimeFormat, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F70E0, void, set_DateTimeFormat, app::CultureInfo* this_ptr, app::DateTimeFormatInfo* value)
    IL2CPP_REGISTER_METHOD(0x025F7230, app::String*, get_EnglishName, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsReadOnly, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F72A0, app::Object*, GetFormat, app::CultureInfo* this_ptr, app::Type* format_type)
    IL2CPP_REGISTER_METHOD(0x025F73E0, void, Construct, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F7440, bool, construct_internal_locale_from_lcid, app::CultureInfo* this_ptr, int32_t lcid)
    IL2CPP_REGISTER_METHOD(0x025F74A0, bool, construct_internal_locale_from_name, app::CultureInfo* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025F75C0, app::String*, get_current_locale_name, )
    IL2CPP_REGISTER_METHOD(0x025F7650, app::CultureInfo__Array*, internal_get_cultures, bool neutral, bool specific, bool installed)
    IL2CPP_REGISTER_METHOD(0x025F7770, void, ConstructInvariant, app::CultureInfo* this_ptr, bool read_only)
    IL2CPP_REGISTER_METHOD(0x025F78C0, app::TextInfo*, CreateTextInfo, app::CultureInfo* this_ptr, bool read_only)
    IL2CPP_REGISTER_METHOD(0x025F7A30, void, ctor_1, app::CultureInfo* this_ptr, int32_t culture)
    IL2CPP_REGISTER_METHOD(0x025F7A50, void, ctor_2, app::CultureInfo* this_ptr, int32_t culture, bool use_user_override)
    IL2CPP_REGISTER_METHOD(0x025F7A70, void, ctor_3, app::CultureInfo* this_ptr, int32_t culture, bool use_user_override, bool read_only)
    IL2CPP_REGISTER_METHOD(0x025F7D70, void, ctor_4, app::CultureInfo* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025F7D90, void, ctor_5, app::CultureInfo* this_ptr, app::String* name, bool use_user_override)
    IL2CPP_REGISTER_METHOD(0x025F7DB0, void, ctor_6, app::CultureInfo* this_ptr, app::String* name, bool use_user_override, bool read_only)
    IL2CPP_REGISTER_METHOD(0x025F8150, void, ctor_7, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F8160, void, insert_into_shared_tables, app::CultureInfo* c)
    IL2CPP_REGISTER_METHOD(0x025F84F0, app::CultureInfo*, GetCultureInfo_1, int32_t culture)
    IL2CPP_REGISTER_METHOD(0x025F88B0, app::CultureInfo*, GetCultureInfo_2, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025F8C60, app::CultureInfo*, CreateCulture, app::String* name, bool reference)
    IL2CPP_REGISTER_METHOD(0x025F8DE0, app::CultureInfo*, CreateSpecificCulture, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025F9340, app::CultureInfo*, CreateSpecificCultureFromNeutral, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025FAE50, int32_t, get_CalendarType, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FAF30, app::Calendar*, CreateCalendar, int32_t calendar_type)
    IL2CPP_REGISTER_METHOD(0x025FB250, app::Exception*, CreateNotFoundException, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025FB3D0, app::CultureInfo*, get_DefaultThreadCurrentCulture, )
    IL2CPP_REGISTER_METHOD(0x025FB480, app::CultureInfo*, get_DefaultThreadCurrentUICulture, )
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_SortName, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FB530, app::CultureInfo*, get_UserDefaultUICulture, )
    IL2CPP_REGISTER_METHOD(0x025FB5C0, app::CultureInfo*, get_UserDefaultCulture, )
    IL2CPP_REGISTER_METHOD(0x025FB650, void, CheckDomainSafetyObject, app::Object* obj, app::Object* container)
    IL2CPP_REGISTER_METHOD(0x025FB870, bool, get_HasInvariantCultureName, app::CultureInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FB970, bool, VerifyCultureName_1, app::String* culture_name, bool throw_exception)
    IL2CPP_REGISTER_METHOD(0x025FBAF0, bool, VerifyCultureName_2, app::CultureInfo* culture, bool throw_exception)
    IL2CPP_REGISTER_METHOD(0x025FBBE0, void, cctor, )
} // namespace app::classes::System::Globalization::CultureInfo
