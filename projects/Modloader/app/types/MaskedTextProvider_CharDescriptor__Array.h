#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor__Array__Class.h>
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor__Array.h>

namespace app::classes::types {
    namespace MaskedTextProvider_CharDescriptor__Array {
        namespace {
            inline app::MaskedTextProvider_CharDescriptor__Array__Class* type_info_ref = nullptr;
        }
        inline app::MaskedTextProvider_CharDescriptor__Array__Class** type_info = &type_info_ref;
        inline app::MaskedTextProvider_CharDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::MaskedTextProvider_CharDescriptor__Array__Class>(type_info, "System.ComponentModel", "MaskedTextProvider+CharDescriptor[]");
        }
        inline app::MaskedTextProvider_CharDescriptor__Array* create() {
            return il2cpp::create_object<app::MaskedTextProvider_CharDescriptor__Array>(get_class());
        }
    } // namespace MaskedTextProvider_CharDescriptor__Array
} // namespace app::classes::types
