#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_IGizmo_.h>
#include <Modloader/app/structs/List_1_Moon_IGizmo_.h>
#include <Modloader/app/structs/IGizmo.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_IGizmo_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_IGizmo_, GetEnumerator, (app::List_1_Moon_IGizmo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784E58, List_1_Moon_IGizmo__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_IGizmo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756068, List_1_Moon_IGizmo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_IGizmo_ * this_ptr, app::IGizmo* item))
    IL2CPP_REGISTER_METHODINFO(0x0472AE00, List_1_Moon_IGizmo__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_IGizmo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D3A0, List_1_Moon_IGizmo__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IGizmo*, get_Item, (app::List_1_Moon_IGizmo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0475CEA0, List_1_Moon_IGizmo__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_IGizmo_
