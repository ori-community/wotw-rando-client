#pragma once
#include <Modloader/app/structs/MaskedTextProvider.h>
#include <Modloader/app/structs/MaskedTextProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskedTextProvider {
        inline app::MaskedTextProvider__Class** type_info() {
            static app::MaskedTextProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaskedTextProvider__Class**)(modloader::win::memory::resolve_rva(0x04770458));
            }
            return cache;
        }
        inline app::MaskedTextProvider__Class* get_class() {
            return il2cpp::get_class<app::MaskedTextProvider__Class>(type_info(), "System.ComponentModel", "MaskedTextProvider");
        }
        inline app::MaskedTextProvider* create() {
            return il2cpp::create_object<app::MaskedTextProvider>(get_class());
        }
    } // namespace MaskedTextProvider
} // namespace app::classes::types
