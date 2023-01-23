#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StringComparer.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::StringComparer {
    IL2CPP_REGISTER_METHOD(0x0243D830, app::StringComparer*, get_InvariantCultureIgnoreCase, ())
    IL2CPP_REGISTER_METHOD(0x0243D8D0, app::StringComparer*, get_CurrentCultureIgnoreCase, ())
    IL2CPP_REGISTER_METHOD(0x0243DA60, app::StringComparer*, get_Ordinal, ())
    IL2CPP_REGISTER_METHOD(0x0243DB00, app::StringComparer*, get_OrdinalIgnoreCase, ())
    IL2CPP_REGISTER_METHOD(0x0243DBA0, app::StringComparer*, Create, (app::CultureInfo * culture, bool ignore_case))
    IL2CPP_REGISTER_METHODINFO(0x04719C30, StringComparer_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243DD30, int32_t, Compare, (app::StringComparer * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHODINFO(0x047902A8, StringComparer_Compare__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243DE90, bool, Equals, (app::StringComparer * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x0243DF90, int32_t, GetHashCode, (app::StringComparer * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x04719098, StringComparer_GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StringComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243E0A0, void, cctor, ())
} // namespace app::classes::System::StringComparer
