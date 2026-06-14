#pragma once
#include <Modloader/app/structs/PreLoadingEntity.h>
#include <Modloader/app/structs/PreLoadingEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLoadingEntity {
        inline app::PreLoadingEntity__Class** type_info() {
            static app::PreLoadingEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLoadingEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLoadingEntity__Class* get_class() {
            return il2cpp::get_class<app::PreLoadingEntity__Class>(type_info(), "Moon.Timeline", "PreLoadingEntity");
        }
        inline app::PreLoadingEntity* create() {
            return il2cpp::create_object<app::PreLoadingEntity>(get_class());
        }
    } // namespace PreLoadingEntity
} // namespace app::classes::types
