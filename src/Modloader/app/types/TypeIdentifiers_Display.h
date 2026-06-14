#pragma once
#include <Modloader/app/structs/TypeIdentifiers_Display.h>
#include <Modloader/app/structs/TypeIdentifiers_Display__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeIdentifiers_Display {
        inline app::TypeIdentifiers_Display__Class** type_info() {
            static app::TypeIdentifiers_Display__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeIdentifiers_Display__Class**)(modloader::win::memory::resolve_rva(0x0475FD78));
            }
            return cache;
        }
        inline app::TypeIdentifiers_Display__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeIdentifiers_Display__Class>(type_info(), "System", "TypeIdentifiers", "Display");
        }
        inline app::TypeIdentifiers_Display* create() {
            return il2cpp::create_object<app::TypeIdentifiers_Display>(get_class());
        }
    } // namespace TypeIdentifiers_Display
} // namespace app::classes::types
