#pragma once
#include <Modloader/app/structs/DefaultControls.h>
#include <Modloader/app/structs/DefaultControls__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultControls {
        inline app::DefaultControls__Class** type_info() {
            static app::DefaultControls__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultControls__Class**)(modloader::win::memory::resolve_rva(0x0477B0F8));
            }
            return cache;
        }
        inline app::DefaultControls__Class* get_class() {
            return il2cpp::get_class<app::DefaultControls__Class>(type_info(), "UnityEngine.UI", "DefaultControls");
        }
        inline app::DefaultControls* create() {
            return il2cpp::create_object<app::DefaultControls>(get_class());
        }
    } // namespace DefaultControls
} // namespace app::classes::types
