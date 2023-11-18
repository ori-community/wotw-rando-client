#pragma once
#include <Modloader/app/structs/DamageResolver.h>
#include <Modloader/app/structs/DamageResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageResolver {
        inline app::DamageResolver__Class** type_info() {
            static app::DamageResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageResolver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageResolver__Class* get_class() {
            return il2cpp::get_class<app::DamageResolver__Class>(type_info(), "Moon", "DamageResolver");
        }
        inline app::DamageResolver* create() {
            return il2cpp::create_object<app::DamageResolver>(get_class());
        }
    } // namespace DamageResolver
} // namespace app::classes::types
