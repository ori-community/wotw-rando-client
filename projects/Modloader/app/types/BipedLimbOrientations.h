#pragma once
#include <Modloader/app/structs/BipedLimbOrientations.h>
#include <Modloader/app/structs/BipedLimbOrientations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BipedLimbOrientations {
        inline app::BipedLimbOrientations__Class** type_info() {
            static app::BipedLimbOrientations__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BipedLimbOrientations__Class**)(modloader::win::memory::resolve_rva(0x0478A788));
            }
            return cache;
        }
        inline app::BipedLimbOrientations__Class* get_class() {
            return il2cpp::get_class<app::BipedLimbOrientations__Class>(type_info(), "RootMotion", "BipedLimbOrientations");
        }
        inline app::BipedLimbOrientations* create() {
            return il2cpp::create_object<app::BipedLimbOrientations>(get_class());
        }
    } // namespace BipedLimbOrientations
} // namespace app::classes::types
