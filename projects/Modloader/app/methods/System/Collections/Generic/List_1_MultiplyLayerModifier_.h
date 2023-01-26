#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_MultiplyLayerModifier_.h>
#include <Modloader/app/structs/MultiplyLayerModifier.h>

namespace app::classes::System::Collections::Generic::List_1_MultiplyLayerModifier_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_MultiplyLayerModifier_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MultiplyLayerModifier_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MultiplyLayerModifier*, get_Item, (app::List_1_MultiplyLayerModifier_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MultiplyLayerModifier_ * this_ptr, app::MultiplyLayerModifier* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_MultiplyLayerModifier_ * this_ptr, app::MultiplyLayerModifier* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_MultiplyLayerModifier_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_MultiplyLayerModifier_
