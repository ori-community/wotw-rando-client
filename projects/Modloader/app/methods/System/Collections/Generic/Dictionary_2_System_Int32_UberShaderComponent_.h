#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_UberShaderComponent_.h>
#include <Modloader/app/structs/UberShaderComponent.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UberShaderComponent_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_UberShaderComponent_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_UberShaderComponent_ * this_ptr, int32_t key, app::UberShaderComponent* value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_UberShaderComponent_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::UberShaderComponent*, get_Item, (app::Dictionary_2_System_Int32_UberShaderComponent_ * this_ptr, int32_t key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UberShaderComponent_
