#pragma once
#include <Modloader/app/structs/ShowAreaMessageAnimatorEntity.h>
#include <Modloader/app/structs/ShowAreaMessageAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowAreaMessageAnimatorEntity {
        inline app::ShowAreaMessageAnimatorEntity__Class** type_info() {
            static app::ShowAreaMessageAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowAreaMessageAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowAreaMessageAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowAreaMessageAnimatorEntity__Class>(type_info(), "", "ShowAreaMessageAnimatorEntity");
        }
        inline app::ShowAreaMessageAnimatorEntity* create() {
            return il2cpp::create_object<app::ShowAreaMessageAnimatorEntity>(get_class());
        }
    } // namespace ShowAreaMessageAnimatorEntity
} // namespace app::classes::types
