#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_MixerSnapshot_.h>
#include <Modloader/app/structs/MixerSnapshot.h>
#include <Modloader/app/structs/Predicate_1_MixerSnapshot_.h>

namespace app::classes::System::Collections::Generic::List_1_MixerSnapshot_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_MixerSnapshot_ * this_ptr, app::MixerSnapshot* item))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MixerSnapshot_ * this_ptr, app::MixerSnapshot* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MixerSnapshot*, get_Item, (app::List_1_MixerSnapshot_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MixerSnapshot_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_MixerSnapshot_ * this_ptr, app::Predicate_1_MixerSnapshot_* match))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_MixerSnapshot_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::List_1_MixerSnapshot_
