#pragma once
#include <Modloader/app/structs/AimBoxing.h>
#include <Modloader/app/structs/AimBoxing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AimBoxing {
        inline app::AimBoxing__Class** type_info() {
            static app::AimBoxing__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AimBoxing__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AimBoxing__Class* get_class() {
            return il2cpp::get_class<app::AimBoxing__Class>(type_info(), "RootMotion.Demos", "AimBoxing");
        }
        inline app::AimBoxing* create() {
            return il2cpp::create_object<app::AimBoxing>(get_class());
        }
    } // namespace AimBoxing
} // namespace app::classes::types
