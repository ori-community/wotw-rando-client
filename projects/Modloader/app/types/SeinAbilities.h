#pragma once
#include <Modloader/app/structs/SeinAbilities.h>
#include <Modloader/app/structs/SeinAbilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilities {
        inline app::SeinAbilities__Class** type_info() {
            static app::SeinAbilities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilities__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilities__Class>(type_info(), "", "SeinAbilities");
        }
        inline app::SeinAbilities* create() {
            return il2cpp::create_object<app::SeinAbilities>(get_class());
        }
    } // namespace SeinAbilities
} // namespace app::classes::types
