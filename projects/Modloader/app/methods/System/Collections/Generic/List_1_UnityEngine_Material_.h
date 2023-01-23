#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_Material_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Material_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Material__Array.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Material_ {
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor, (app::List_1_UnityEngine_Material_ * this_ptr, app::IEnumerable_1_UnityEngine_Material_* collection))
    IL2CPP_REGISTER_METHODINFO(0x0473DD50, List_1_UnityEngine_Material___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_Material_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473BFF8, List_1_UnityEngine_Material__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_UnityEngine_Material_ * this_ptr, int32_t index, app::Material* item))
    IL2CPP_REGISTER_METHODINFO(0x047156F0, List_1_UnityEngine_Material__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Material__Array*, ToArray, (app::List_1_UnityEngine_Material_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047769B8, List_1_UnityEngine_Material__ToArray__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Material_
