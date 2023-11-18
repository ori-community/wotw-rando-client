#pragma once
#include <Modloader/app/structs/TeleportPlayerAnimatorEntity.h>
#include <Modloader/app/structs/TeleportPlayerAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TeleportPlayerAnimatorEntity {
        inline app::TeleportPlayerAnimatorEntity__Class** type_info() {
            static app::TeleportPlayerAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TeleportPlayerAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TeleportPlayerAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TeleportPlayerAnimatorEntity__Class>(type_info(), "", "TeleportPlayerAnimatorEntity");
        }
        inline app::TeleportPlayerAnimatorEntity* create() {
            return il2cpp::create_object<app::TeleportPlayerAnimatorEntity>(get_class());
        }
    } // namespace TeleportPlayerAnimatorEntity
} // namespace app::classes::types
