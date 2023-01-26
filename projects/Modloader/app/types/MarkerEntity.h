#pragma once
#include <Modloader/app/structs/MarkerEntity.h>
#include <Modloader/app/structs/MarkerEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarkerEntity {
        inline app::MarkerEntity__Class** type_info() {
            static app::MarkerEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MarkerEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MarkerEntity__Class* get_class() {
            return il2cpp::get_class<app::MarkerEntity__Class>(type_info(), "Moon.Timeline", "MarkerEntity");
        }
        inline app::MarkerEntity* create() {
            return il2cpp::create_object<app::MarkerEntity>(get_class());
        }
    } // namespace MarkerEntity
} // namespace app::classes::types
