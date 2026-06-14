#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_UberInteractionManager_ExplosionApplication_.h>
#include <Modloader/app/structs/Comparison_1_UberInteractionManager_ExplosionApplication_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_UberInteractionManager_ExplosionApplication_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_UberInteractionManager_ExplosionApplication_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x028CC7B0,
        app::Comparer_1_UberInteractionManager_ExplosionApplication_*,
        Create,
        app::Comparison_1_UberInteractionManager_ExplosionApplication_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x028CC9B0, app::Comparer_1_UberInteractionManager_ExplosionApplication_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02810770,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_UberInteractionManager_ExplosionApplication_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_UberInteractionManager_ExplosionApplication_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_UberInteractionManager_ExplosionApplication_
