#pragma once
#include <Modloader/app/structs/FaderAnimatorEntity.h>
#include <Modloader/app/structs/FaderAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaderAnimatorEntity {
        inline app::FaderAnimatorEntity__Class** type_info() {
            static app::FaderAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FaderAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FaderAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::FaderAnimatorEntity__Class>(type_info(), "Moon.Timeline", "FaderAnimatorEntity");
        }
        inline app::FaderAnimatorEntity* create() {
            return il2cpp::create_object<app::FaderAnimatorEntity>(get_class());
        }
    } // namespace FaderAnimatorEntity
} // namespace app::classes::types
