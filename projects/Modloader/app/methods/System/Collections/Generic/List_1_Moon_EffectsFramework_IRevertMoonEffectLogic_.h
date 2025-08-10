#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRevertMoonEffectLogic.h>
#include <Modloader/app/structs/List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_* this_ptr, app::IRevertMoonEffectLogic* item)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::IRevertMoonEffectLogic*,
        get_Item,
        app::List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_
