#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_IEntityOwned_.h>
#include <Modloader/app/structs/IEntityOwned.h>
#include <Modloader/app/structs/List_1_Moon_IEntityOwned_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_IEntityOwned_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IEntityOwned*, get_Item, app::List_1_Moon_IEntityOwned_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_IEntityOwned_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, app::List_1_Moon_IEntityOwned_* this_ptr, app::Comparison_1_Moon_IEntityOwned_* comparison)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_IEntityOwned_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_IEntityOwned_
