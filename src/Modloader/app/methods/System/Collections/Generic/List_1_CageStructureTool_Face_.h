#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/CageStructureTool_Face__Array.h>
#include <Modloader/app/structs/List_1_CageStructureTool_Face_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_CageStructureTool_Face_.h>
#include <Modloader/app/structs/Predicate_1_CageStructureTool_Face_.h>

namespace app::classes::System::Collections::Generic::List_1_CageStructureTool_Face_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_CageStructureTool_Face_, GetEnumerator, app::List_1_CageStructureTool_Face_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CageStructureTool_Face*, get_Item, app::List_1_CageStructureTool_Face_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_CageStructureTool_Face_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_CageStructureTool_Face_* this_ptr, app::CageStructureTool_Face* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_CageStructureTool_Face_* this_ptr, app::CageStructureTool_Face* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_CageStructureTool_Face_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F05A0,
        app::CageStructureTool_Face*,
        Find,
        app::List_1_CageStructureTool_Face_* this_ptr,
        app::Predicate_1_CageStructureTool_Face_* match
    )
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::CageStructureTool_Face__Array*, ToArray, app::List_1_CageStructureTool_Face_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_CageStructureTool_Face_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_CageStructureTool_Face_
