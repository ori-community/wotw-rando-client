#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor__Class.h>
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor.h>
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor__Array.h>

namespace app::classes::types {
    namespace MaskedTextProvider_CharDescriptor {
        inline app::MaskedTextProvider_CharDescriptor__Class** type_info = (app::MaskedTextProvider_CharDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047917E8));
        inline app::MaskedTextProvider_CharDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::MaskedTextProvider_CharDescriptor__Class>(type_info, "System.ComponentModel", "MaskedTextProvider", "CharDescriptor");
        }
        inline app::MaskedTextProvider_CharDescriptor* create() {
            return il2cpp::create_object<app::MaskedTextProvider_CharDescriptor>(get_class());
        }
        inline app::MaskedTextProvider_CharDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::MaskedTextProvider_CharDescriptor__Array>(get_class(), size);
        }
        inline app::MaskedTextProvider_CharDescriptor__Array* create_array(const std::vector<app::MaskedTextProvider_CharDescriptor*>& items) {
            return il2cpp::array_new<app::MaskedTextProvider_CharDescriptor__Array>(get_class(), items);
        }
    } // namespace MaskedTextProvider_CharDescriptor
} // namespace app::classes::types
