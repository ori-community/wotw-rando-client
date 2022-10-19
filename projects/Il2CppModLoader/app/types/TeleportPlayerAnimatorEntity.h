#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TeleportPlayerAnimatorEntity {
        namespace {
            inline app::TeleportPlayerAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::TeleportPlayerAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::TeleportPlayerAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TeleportPlayerAnimatorEntity__Class>(type_info, "", "TeleportPlayerAnimatorEntity");
        }
        inline app::TeleportPlayerAnimatorEntity* create() {
            return il2cpp::create_object<app::TeleportPlayerAnimatorEntity>(get_class());
        }
    } // namespace TeleportPlayerAnimatorEntity
} // namespace app::classes::types
