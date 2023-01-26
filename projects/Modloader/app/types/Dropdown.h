#pragma once
#include <Modloader/app/structs/Dropdown.h>
#include <Modloader/app/structs/Dropdown__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dropdown {
        inline app::Dropdown__Class** type_info() {
            static app::Dropdown__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dropdown__Class**)(modloader::win::memory::resolve_rva(0x04713CF8));
            }
            return cache;
        }
        inline app::Dropdown__Class* get_class() {
            return il2cpp::get_class<app::Dropdown__Class>(type_info(), "UnityEngine.UI", "Dropdown");
        }
        inline app::Dropdown* create() {
            return il2cpp::create_object<app::Dropdown>(get_class());
        }
    } // namespace Dropdown
} // namespace app::classes::types
