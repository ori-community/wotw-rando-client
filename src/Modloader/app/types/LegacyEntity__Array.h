#pragma once
#include <Modloader/app/structs/LegacyEntity__Array.h>
#include <Modloader/app/structs/LegacyEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyEntity__Array {
        inline app::LegacyEntity__Array__Class** type_info() {
            static app::LegacyEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntity__Array__Class>(type_info(), "", "LegacyEntity[]");
        }
        inline app::LegacyEntity__Array* create() {
            return il2cpp::create_object<app::LegacyEntity__Array>(get_class());
        }
    } // namespace LegacyEntity__Array
} // namespace app::classes::types
