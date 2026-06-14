#pragma once
#include <Modloader/app/structs/KickupDeathBehaviour.h>
#include <Modloader/app/structs/KickupDeathBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KickupDeathBehaviour {
        inline app::KickupDeathBehaviour__Class** type_info() {
            static app::KickupDeathBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KickupDeathBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KickupDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KickupDeathBehaviour__Class>(type_info(), "", "KickupDeathBehaviour");
        }
        inline app::KickupDeathBehaviour* create() {
            return il2cpp::create_object<app::KickupDeathBehaviour>(get_class());
        }
    } // namespace KickupDeathBehaviour
} // namespace app::classes::types
