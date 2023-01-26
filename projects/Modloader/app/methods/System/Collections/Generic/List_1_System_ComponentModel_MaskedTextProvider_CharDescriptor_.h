#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ComponentModel_MaskedTextProvider_CharDescriptor_.h>
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor.h>

namespace app::classes::System::Collections::Generic::List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ * this_ptr, app::MaskedTextProvider_CharDescriptor* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MaskedTextProvider_CharDescriptor*, get_Item, (app::List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_ComponentModel_MaskedTextProvider_CharDescriptor_, GetEnumerator, (app::List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_
