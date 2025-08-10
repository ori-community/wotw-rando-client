#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/Comparison_1_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_SpiritShardIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_SpiritShardIconsCollection_Icons_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x02828B80,
        app::Comparer_1_SpiritShardIconsCollection_Icons_*,
        Create,
        app::Comparison_1_SpiritShardIconsCollection_Icons_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x02828D80, app::Comparer_1_SpiritShardIconsCollection_Icons_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x0280A070, int32_t, IComparer_Compare, app::Comparer_1_SpiritShardIconsCollection_Icons_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_SpiritShardIconsCollection_Icons_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_SpiritShardIconsCollection_Icons_
