#pragma once
#include <Modloader/app/structs/LightPriority.h>
#include <Modloader/app/structs/LightPriority__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightPriority {
        inline app::LightPriority__Class** type_info() {
            static app::LightPriority__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightPriority__Class**)(modloader::win::memory::resolve_rva(0x047151D0));
            }
            return cache;
        }
        inline app::LightPriority__Class* get_class() {
            return il2cpp::get_class<app::LightPriority__Class>(type_info(), "", "LightPriority");
        }
        inline app::LightPriority* create() {
            return il2cpp::create_object<app::LightPriority>(get_class());
        }
    } // namespace LightPriority
} // namespace app::classes::types
