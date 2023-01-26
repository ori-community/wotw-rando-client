#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Component_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Component_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Component_1*, get_Item, (app::List_1_UnityEngine_Component_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_UnityEngine_Component_ * this_ptr, app::Predicate_1_UnityEngine_Component_* match))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UnityEngine_Component_ * this_ptr, app::Component_1* item))
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_2, (app::List_1_UnityEngine_Component_ * this_ptr, app::IEnumerable_1_UnityEngine_Component_* collection))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_UnityEngine_Component_ * this_ptr, app::Component_1* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_Component_, GetEnumerator, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_3, (app::List_1_UnityEngine_Component_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_UnityEngine_Component_ * this_ptr, app::Comparison_1_UnityEngine_Component_* comparison))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Component_1__Array*, ToArray, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_Component_ * this_ptr, app::IEnumerable_1_UnityEngine_Component_* collection))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_UnityEngine_Component_ * this_ptr, app::Component_1* item))
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Component_
