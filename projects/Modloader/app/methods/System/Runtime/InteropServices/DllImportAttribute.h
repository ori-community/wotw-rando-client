#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::InteropServices::DllImportAttribute {
    IL2CPP_REGISTER_METHOD(0x01A93F90, app::Attribute*, GetCustomAttribute, (app::RuntimeMethodInfo * method_1))
    IL2CPP_REGISTER_METHOD(0x01A941F0, bool, IsDefined, (app::RuntimeMethodInfo * method_1))
    IL2CPP_REGISTER_METHOD(0x01A94220, void, ctor_1, (app::DllImportAttribute * this_ptr, app::String* dll_name, app::String* entry_point, app::CharSet__Enum char_set, bool exact_spelling, bool set_last_error, bool preserve_sig, app::CallingConvention__Enum calling_convention, bool best_fit_mapping, bool throw_on_unmappable_char))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::DllImportAttribute * this_ptr, app::String* dll_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Value, (app::DllImportAttribute * this_ptr))
} // namespace app::classes::System::Runtime::InteropServices::DllImportAttribute
