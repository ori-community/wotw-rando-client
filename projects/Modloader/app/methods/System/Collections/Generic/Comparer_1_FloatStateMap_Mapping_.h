#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_FloatStateMap_Mapping_.h>
#include <Modloader/app/structs/Comparison_1_FloatStateMap_Mapping_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_FloatStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_FloatStateMap_Mapping_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02C9AF70, app::Comparer_1_FloatStateMap_Mapping_*, Create, app::Comparison_1_FloatStateMap_Mapping_* comparison)
    IL2CPP_REGISTER_METHOD(0x02C9B170, app::Comparer_1_FloatStateMap_Mapping_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x0280C360, int32_t, IComparer_Compare, app::Comparer_1_FloatStateMap_Mapping_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_FloatStateMap_Mapping_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_FloatStateMap_Mapping_
