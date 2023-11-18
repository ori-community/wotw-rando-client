#pragma once
#include <Modloader/app/structs/KickupBehaviour.h>
#include <Modloader/app/structs/KickupBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KickupBehaviour {
        inline app::KickupBehaviour__Class** type_info() {
            static app::KickupBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KickupBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KickupBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KickupBehaviour__Class>(type_info(), "", "KickupBehaviour");
        }
        inline app::KickupBehaviour* create() {
            return il2cpp::create_object<app::KickupBehaviour>(get_class());
        }
    } // namespace KickupBehaviour
} // namespace app::classes::types
