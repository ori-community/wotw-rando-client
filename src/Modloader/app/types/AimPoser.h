#pragma once
#include <Modloader/app/structs/AimPoser.h>
#include <Modloader/app/structs/AimPoser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AimPoser {
        inline app::AimPoser__Class** type_info() {
            static app::AimPoser__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AimPoser__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AimPoser__Class* get_class() {
            return il2cpp::get_class<app::AimPoser__Class>(type_info(), "RootMotion.FinalIK", "AimPoser");
        }
        inline app::AimPoser* create() {
            return il2cpp::create_object<app::AimPoser>(get_class());
        }
    } // namespace AimPoser
} // namespace app::classes::types
