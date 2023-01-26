#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoParameterInfo.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::MonoParameterInfo {
    IL2CPP_REGISTER_METHOD(0x02692AB0, void, ctor, (app::MonoParameterInfo * this_ptr, app::ParameterInfo_1* pinfo, app::MemberInfo_1* member))
    IL2CPP_REGISTER_METHOD(0x02692B50, app::Object*, get_DefaultValue, (app::MonoParameterInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02692E00, app::Object__Array*, GetCustomAttributes_1, (app::MonoParameterInfo * this_ptr, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02692EB0, app::Object__Array*, GetCustomAttributes_2, (app::MonoParameterInfo * this_ptr, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02692F70, bool, IsDefined, (app::MonoParameterInfo * this_ptr, app::Type* attribute_type, bool inherit))
} // namespace app::classes::System::Reflection::MonoParameterInfo
