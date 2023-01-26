#pragma once
#include <Modloader/app/structs/HammerTrail.h>
#include <Modloader/app/structs/HammerTrail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerTrail {
        inline app::HammerTrail__Class** type_info() {
            static app::HammerTrail__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HammerTrail__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HammerTrail__Class* get_class() {
            return il2cpp::get_class<app::HammerTrail__Class>(type_info(), "", "HammerTrail");
        }
        inline app::HammerTrail* create() {
            return il2cpp::create_object<app::HammerTrail>(get_class());
        }
    } // namespace HammerTrail
} // namespace app::classes::types
