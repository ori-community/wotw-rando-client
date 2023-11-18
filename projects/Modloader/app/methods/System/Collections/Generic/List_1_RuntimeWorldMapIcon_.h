#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeWorldMapIcon.h>
#include <Modloader/app/structs/Comparison_1_RuntimeWorldMapIcon_.h>
#include <Modloader/app/structs/List_1_RuntimeWorldMapIcon_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_RuntimeWorldMapIcon_.h>
#include <Modloader/app/structs/Predicate_1_RuntimeWorldMapIcon_.h>

namespace app::classes::System::Collections::Generic::List_1_RuntimeWorldMapIcon_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RuntimeWorldMapIcon*, get_Item, (app::List_1_RuntimeWorldMapIcon_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_RuntimeWorldMapIcon_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_RuntimeWorldMapIcon_, GetEnumerator, (app::List_1_RuntimeWorldMapIcon_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_RuntimeWorldMapIcon_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_RuntimeWorldMapIcon_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_RuntimeWorldMapIcon_ * this_ptr, app::RuntimeWorldMapIcon* item))
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::RuntimeWorldMapIcon*, Find, (app::List_1_RuntimeWorldMapIcon_ * this_ptr, app::Predicate_1_RuntimeWorldMapIcon_* match))
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_RuntimeWorldMapIcon_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_RuntimeWorldMapIcon_ * this_ptr, app::Comparison_1_RuntimeWorldMapIcon_* comparison))
} // namespace app::classes::System::Collections::Generic::List_1_RuntimeWorldMapIcon_
