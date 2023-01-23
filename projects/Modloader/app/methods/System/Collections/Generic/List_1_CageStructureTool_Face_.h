#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_CageStructureTool_Face_.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/Predicate_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/CageStructureTool_Face__Array.h>

namespace app::classes::System::Collections::Generic::List_1_CageStructureTool_Face_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_CageStructureTool_Face_, GetEnumerator, (app::List_1_CageStructureTool_Face_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795558, List_1_CageStructureTool_Face__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CageStructureTool_Face*, get_Item, (app::List_1_CageStructureTool_Face_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476DCE0, List_1_CageStructureTool_Face__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_CageStructureTool_Face_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04700C10, List_1_CageStructureTool_Face__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_CageStructureTool_Face_ * this_ptr, app::CageStructureTool_Face* item))
    IL2CPP_REGISTER_METHODINFO(0x04740B50, List_1_CageStructureTool_Face__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_CageStructureTool_Face_ * this_ptr, app::CageStructureTool_Face* item))
    IL2CPP_REGISTER_METHODINFO(0x0472F0C0, List_1_CageStructureTool_Face__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_CageStructureTool_Face_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709A38, List_1_CageStructureTool_Face___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::CageStructureTool_Face*, Find, (app::List_1_CageStructureTool_Face_ * this_ptr, app::Predicate_1_CageStructureTool_Face_* match))
    IL2CPP_REGISTER_METHODINFO(0x0475EFD8, List_1_CageStructureTool_Face__Find__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::CageStructureTool_Face__Array*, ToArray, (app::List_1_CageStructureTool_Face_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472DDE0, List_1_CageStructureTool_Face__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_CageStructureTool_Face_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783780, List_1_CageStructureTool_Face__Clear__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_CageStructureTool_Face_
