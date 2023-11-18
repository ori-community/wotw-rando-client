#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_OverridableTextureProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_OverridableTextureProperty_.h>
#include <Modloader/app/structs/Predicate_1_OverridableTextureProperty_.h>

namespace app::classes::System::Collections::Generic::List_1_OverridableTextureProperty_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_OverridableTextureProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_2, (app::List_1_OverridableTextureProperty_ * this_ptr, app::IEnumerable_1_OverridableTextureProperty_* collection))
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_OverridableTextureProperty_ * this_ptr, app::Predicate_1_OverridableTextureProperty_* match))
} // namespace app::classes::System::Collections::Generic::List_1_OverridableTextureProperty_
