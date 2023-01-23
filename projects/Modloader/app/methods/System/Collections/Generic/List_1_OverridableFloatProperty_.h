#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_OverridableFloatProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_OverridableFloatProperty_.h>
#include <Modloader/app/structs/Predicate_1_OverridableFloatProperty_.h>

namespace app::classes::System::Collections::Generic::List_1_OverridableFloatProperty_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_OverridableFloatProperty_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726AA0, List_1_OverridableFloatProperty___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_2, (app::List_1_OverridableFloatProperty_ * this_ptr, app::IEnumerable_1_OverridableFloatProperty_* collection))
    IL2CPP_REGISTER_METHODINFO(0x047132D0, List_1_OverridableFloatProperty___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_OverridableFloatProperty_ * this_ptr, app::Predicate_1_OverridableFloatProperty_* match))
    IL2CPP_REGISTER_METHODINFO(0x04726EC8, List_1_OverridableFloatProperty__RemoveAll__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_OverridableFloatProperty_
