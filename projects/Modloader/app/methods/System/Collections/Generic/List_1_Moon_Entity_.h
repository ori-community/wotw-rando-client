#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/Predicate_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Entity_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Entity_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Entity*, get_Item, (app::List_1_Moon_Entity_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04702DA8, List_1_Moon_Entity__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Entity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725530, List_1_Moon_Entity__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_Moon_Entity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747100, List_1_Moon_Entity___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_Entity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D878, List_1_Moon_Entity__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_Entity_ * this_ptr, app::Entity* item))
    IL2CPP_REGISTER_METHODINFO(0x04718E58, List_1_Moon_Entity__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_Entity_ * this_ptr, app::Entity* item))
    IL2CPP_REGISTER_METHODINFO(0x0477BC40, List_1_Moon_Entity__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_Moon_Entity_ * this_ptr, app::Predicate_1_Moon_Entity_* match))
    IL2CPP_REGISTER_METHODINFO(0x04786DA0, List_1_Moon_Entity__RemoveAll__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_Entity_, GetEnumerator, (app::List_1_Moon_Entity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715CD8, List_1_Moon_Entity__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_Entity_ * this_ptr, app::Entity* item))
    IL2CPP_REGISTER_METHODINFO(0x047102F8, List_1_Moon_Entity__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_Moon_Entity_ * this_ptr, app::Entity* item))
    IL2CPP_REGISTER_METHODINFO(0x0476FEE8, List_1_Moon_Entity__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_Entity_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04713428, List_1_Moon_Entity__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_Moon_Entity_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047235B8, List_1_Moon_Entity___ctor_1__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Entity_
