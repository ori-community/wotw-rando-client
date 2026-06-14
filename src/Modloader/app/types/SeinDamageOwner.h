#pragma once
#include <Modloader/app/structs/SeinDamageOwner.h>
#include <Modloader/app/structs/SeinDamageOwner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDamageOwner {
        inline app::SeinDamageOwner__Class** type_info() {
            static app::SeinDamageOwner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinDamageOwner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinDamageOwner__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageOwner__Class>(type_info(), "Moon", "SeinDamageOwner");
        }
        inline app::SeinDamageOwner* create() {
            return il2cpp::create_object<app::SeinDamageOwner>(get_class());
        }
    } // namespace SeinDamageOwner
} // namespace app::classes::types
