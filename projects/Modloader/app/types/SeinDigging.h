#pragma once
#include <Modloader/app/structs/SeinDigging.h>
#include <Modloader/app/structs/SeinDigging__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDigging {
        inline app::SeinDigging__Class** type_info() {
            static app::SeinDigging__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinDigging__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinDigging__Class* get_class() {
            return il2cpp::get_class<app::SeinDigging__Class>(type_info(), "", "SeinDigging");
        }
        inline app::SeinDigging* create() {
            return il2cpp::create_object<app::SeinDigging>(get_class());
        }
    } // namespace SeinDigging
} // namespace app::classes::types
