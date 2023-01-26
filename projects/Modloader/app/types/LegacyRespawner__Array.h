#pragma once
#include <Modloader/app/structs/LegacyRespawner__Array.h>
#include <Modloader/app/structs/LegacyRespawner__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyRespawner__Array {
        inline app::LegacyRespawner__Array__Class** type_info() {
            static app::LegacyRespawner__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyRespawner__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyRespawner__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyRespawner__Array__Class>(type_info(), "", "LegacyRespawner[]");
        }
        inline app::LegacyRespawner__Array* create() {
            return il2cpp::create_object<app::LegacyRespawner__Array>(get_class());
        }
    } // namespace LegacyRespawner__Array
} // namespace app::classes::types
