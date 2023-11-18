#pragma once
#include <Modloader/app/structs/Recoil.h>
#include <Modloader/app/structs/Recoil__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Recoil {
        inline app::Recoil__Class** type_info() {
            static app::Recoil__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Recoil__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Recoil__Class* get_class() {
            return il2cpp::get_class<app::Recoil__Class>(type_info(), "RootMotion.FinalIK", "Recoil");
        }
        inline app::Recoil* create() {
            return il2cpp::create_object<app::Recoil>(get_class());
        }
    } // namespace Recoil
} // namespace app::classes::types
