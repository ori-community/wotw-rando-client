#pragma once
#include <Modloader/app/structs/SecurityElement.h>
#include <Modloader/app/structs/SecurityElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityElement {
        inline app::SecurityElement__Class** type_info() {
            static app::SecurityElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityElement__Class**)(modloader::win::memory::resolve_rva(0x047225F0));
            }
            return cache;
        }
        inline app::SecurityElement__Class* get_class() {
            return il2cpp::get_class<app::SecurityElement__Class>(type_info(), "System.Security", "SecurityElement");
        }
        inline app::SecurityElement* create() {
            return il2cpp::create_object<app::SecurityElement>(get_class());
        }
    } // namespace SecurityElement
} // namespace app::classes::types
