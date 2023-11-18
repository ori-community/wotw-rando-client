#pragma once
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor__Array.h>
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskedTextProvider_CharDescriptor__Array {
        inline app::MaskedTextProvider_CharDescriptor__Array__Class** type_info() {
            static app::MaskedTextProvider_CharDescriptor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskedTextProvider_CharDescriptor__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskedTextProvider_CharDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::MaskedTextProvider_CharDescriptor__Array__Class>(type_info(), "System.ComponentModel", "MaskedTextProvider+CharDescriptor[]");
        }
        inline app::MaskedTextProvider_CharDescriptor__Array* create() {
            return il2cpp::create_object<app::MaskedTextProvider_CharDescriptor__Array>(get_class());
        }
    } // namespace MaskedTextProvider_CharDescriptor__Array
} // namespace app::classes::types
