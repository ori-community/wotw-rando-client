#pragma once
#include <Modloader/app/structs/NavigationSettings.h>
#include <Modloader/app/structs/NavigationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigationSettings {
        inline app::NavigationSettings__Class** type_info() {
            static app::NavigationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NavigationSettings__Class**)(modloader::win::memory::resolve_rva(0x0471F438));
            }
            return cache;
        }
        inline app::NavigationSettings__Class* get_class() {
            return il2cpp::get_class<app::NavigationSettings__Class>(type_info(), "", "NavigationSettings");
        }
        inline app::NavigationSettings* create() {
            return il2cpp::create_object<app::NavigationSettings>(get_class());
        }
    } // namespace NavigationSettings
} // namespace app::classes::types
