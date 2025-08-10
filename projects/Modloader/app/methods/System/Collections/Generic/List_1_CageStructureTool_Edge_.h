#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool_Edge.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_CageStructureTool_Edge_.h>
#include <Modloader/app/structs/Predicate_1_CageStructureTool_Edge_.h>

namespace app::classes::System::Collections::Generic::List_1_CageStructureTool_Edge_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CageStructureTool_Edge*, get_Item, app::List_1_CageStructureTool_Edge_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_CageStructureTool_Edge_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_CageStructureTool_Edge_, GetEnumerator, app::List_1_CageStructureTool_Edge_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F05A0,
        app::CageStructureTool_Edge*,
        Find,
        app::List_1_CageStructureTool_Edge_* this_ptr,
        app::Predicate_1_CageStructureTool_Edge_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_CageStructureTool_Edge_* this_ptr, app::CageStructureTool_Edge* item)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, app::List_1_CageStructureTool_Edge_* this_ptr, app::Predicate_1_CageStructureTool_Edge_* match)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_CageStructureTool_Edge_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_CageStructureTool_Edge_* this_ptr, app::CageStructureTool_Edge* item)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_CageStructureTool_Edge_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_CageStructureTool_Edge_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_CageStructureTool_Edge_
