#pragma once
#include <Modloader/app/structs/TargetSpheres.h>
#include <Modloader/app/structs/TargetSpheres__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetSpheres {
        inline app::TargetSpheres__Class** type_info() {
            static app::TargetSpheres__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TargetSpheres__Class**)(modloader::win::memory::resolve_rva(0x047012C8));
            }
            return cache;
        }
        inline app::TargetSpheres__Class* get_class() {
            return il2cpp::get_class<app::TargetSpheres__Class>(type_info(), "", "TargetSpheres");
        }
        inline app::TargetSpheres* create() {
            return il2cpp::create_object<app::TargetSpheres>(get_class());
        }
    } // namespace TargetSpheres
} // namespace app::classes::types
