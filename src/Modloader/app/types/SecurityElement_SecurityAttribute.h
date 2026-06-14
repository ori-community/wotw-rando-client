#pragma once
#include <Modloader/app/structs/SecurityElement_SecurityAttribute.h>
#include <Modloader/app/structs/SecurityElement_SecurityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityElement_SecurityAttribute {
        inline app::SecurityElement_SecurityAttribute__Class** type_info() {
            static app::SecurityElement_SecurityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityElement_SecurityAttribute__Class**)(modloader::win::memory::resolve_rva(0x04719E38));
            }
            return cache;
        }
        inline app::SecurityElement_SecurityAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::SecurityElement_SecurityAttribute__Class>(type_info(), "System.Security", "SecurityElement", "SecurityAttribute");
        }
        inline app::SecurityElement_SecurityAttribute* create() {
            return il2cpp::create_object<app::SecurityElement_SecurityAttribute>(get_class());
        }
    } // namespace SecurityElement_SecurityAttribute
} // namespace app::classes::types
