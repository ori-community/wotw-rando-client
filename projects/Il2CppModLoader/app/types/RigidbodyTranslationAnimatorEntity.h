#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyTranslationAnimatorEntity {
        namespace {
            inline app::RigidbodyTranslationAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyTranslationAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::RigidbodyTranslationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyTranslationAnimatorEntity__Class>(type_info, "Moon.Timeline", "RigidbodyTranslationAnimatorEntity");
        }
        inline app::RigidbodyTranslationAnimatorEntity* create() {
            return il2cpp::create_object<app::RigidbodyTranslationAnimatorEntity>(get_class());
        }
    } // namespace RigidbodyTranslationAnimatorEntity
} // namespace app::classes::types
