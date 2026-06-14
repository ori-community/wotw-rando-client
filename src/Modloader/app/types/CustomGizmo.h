#pragma once
#include <Modloader/app/structs/CustomGizmo.h>
#include <Modloader/app/structs/CustomGizmo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomGizmo {
        inline app::CustomGizmo__Class** type_info() {
            static app::CustomGizmo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CustomGizmo__Class**)(modloader::win::memory::resolve_rva(0x0477DE58));
            }
            return cache;
        }
        inline app::CustomGizmo__Class* get_class() {
            return il2cpp::get_class<app::CustomGizmo__Class>(type_info(), "Moon", "CustomGizmo");
        }
        inline app::CustomGizmo* create() {
            return il2cpp::create_object<app::CustomGizmo>(get_class());
        }
    } // namespace CustomGizmo
} // namespace app::classes::types
