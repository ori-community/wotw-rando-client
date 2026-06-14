#pragma once
#include <Modloader/app/structs/HealthBar.h>
#include <Modloader/app/structs/HealthBar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthBar {
        inline app::HealthBar__Class** type_info() {
            static app::HealthBar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HealthBar__Class**)(modloader::win::memory::resolve_rva(0x04780D78));
            }
            return cache;
        }
        inline app::HealthBar__Class* get_class() {
            return il2cpp::get_class<app::HealthBar__Class>(type_info(), "", "HealthBar");
        }
        inline app::HealthBar* create() {
            return il2cpp::create_object<app::HealthBar>(get_class());
        }
    } // namespace HealthBar
} // namespace app::classes::types
