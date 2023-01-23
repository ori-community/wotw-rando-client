#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CageStructureTool_Edge.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/Predicate_1_CageStructureTool_Edge_.h>

namespace app::classes::System::Collections::Generic::List_1_CageStructureTool_Edge_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CageStructureTool_Edge*, get_Item, (app::List_1_CageStructureTool_Edge_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470DC00, List_1_CageStructureTool_Edge__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_CageStructureTool_Edge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FCB8, List_1_CageStructureTool_Edge__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_CageStructureTool_Edge_, GetEnumerator, (app::List_1_CageStructureTool_Edge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738320, List_1_CageStructureTool_Edge__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::CageStructureTool_Edge*, Find, (app::List_1_CageStructureTool_Edge_ * this_ptr, app::Predicate_1_CageStructureTool_Edge_* match))
    IL2CPP_REGISTER_METHODINFO(0x04707CD8, List_1_CageStructureTool_Edge__Find__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_CageStructureTool_Edge_ * this_ptr, app::CageStructureTool_Edge* item))
    IL2CPP_REGISTER_METHODINFO(0x04709D50, List_1_CageStructureTool_Edge__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_CageStructureTool_Edge_ * this_ptr, app::Predicate_1_CageStructureTool_Edge_* match))
    IL2CPP_REGISTER_METHODINFO(0x0475DA58, List_1_CageStructureTool_Edge__FindIndex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_CageStructureTool_Edge_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047823B8, List_1_CageStructureTool_Edge__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_CageStructureTool_Edge_ * this_ptr, app::CageStructureTool_Edge* item))
    IL2CPP_REGISTER_METHODINFO(0x0472A370, List_1_CageStructureTool_Edge__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_CageStructureTool_Edge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791ED0, List_1_CageStructureTool_Edge__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_CageStructureTool_Edge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768B88, List_1_CageStructureTool_Edge___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_CageStructureTool_Edge_
