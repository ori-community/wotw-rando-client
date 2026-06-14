#pragma once
#include <Modloader/app/structs/SeinUIEntity.h>
#include <Modloader/app/structs/SeinUIEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinUIEntity {
        inline app::SeinUIEntity__Class** type_info() {
            static app::SeinUIEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinUIEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinUIEntity__Class* get_class() {
            return il2cpp::get_class<app::SeinUIEntity__Class>(type_info(), "Moon.Timeline", "SeinUIEntity");
        }
        inline app::SeinUIEntity* create() {
            return il2cpp::create_object<app::SeinUIEntity>(get_class());
        }
    } // namespace SeinUIEntity
} // namespace app::classes::types
