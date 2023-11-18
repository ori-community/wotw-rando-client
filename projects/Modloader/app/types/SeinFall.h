#pragma once
#include <Modloader/app/structs/SeinFall.h>
#include <Modloader/app/structs/SeinFall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinFall {
        inline app::SeinFall__Class** type_info() {
            static app::SeinFall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinFall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinFall__Class* get_class() {
            return il2cpp::get_class<app::SeinFall__Class>(type_info(), "", "SeinFall");
        }
        inline app::SeinFall* create() {
            return il2cpp::create_object<app::SeinFall>(get_class());
        }
    } // namespace SeinFall
} // namespace app::classes::types
