#pragma once
#include <Modloader/app/structs/ShowInteractiveTextEntity.h>
#include <Modloader/app/structs/ShowInteractiveTextEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowInteractiveTextEntity {
        inline app::ShowInteractiveTextEntity__Class** type_info() {
            static app::ShowInteractiveTextEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowInteractiveTextEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowInteractiveTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowInteractiveTextEntity__Class>(type_info(), "Moon.Timeline", "ShowInteractiveTextEntity");
        }
        inline app::ShowInteractiveTextEntity* create() {
            return il2cpp::create_object<app::ShowInteractiveTextEntity>(get_class());
        }
    } // namespace ShowInteractiveTextEntity
} // namespace app::classes::types
