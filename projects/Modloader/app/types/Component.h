#pragma once
#include <Modloader/app/structs/Component.h>
#include <Modloader/app/structs/Component__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Component {
        inline app::Component__Class** type_info() {
            static app::Component__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Component__Class**)(modloader::win::memory::resolve_rva(0x0479A0C0));
            }
            return cache;
        }
        inline app::Component__Class* get_class() {
            return il2cpp::get_class<app::Component__Class>(type_info(), "System.ComponentModel", "Component");
        }
        inline app::Component* create() {
            return il2cpp::create_object<app::Component>(get_class());
        }
    } // namespace Component
} // namespace app::classes::types
