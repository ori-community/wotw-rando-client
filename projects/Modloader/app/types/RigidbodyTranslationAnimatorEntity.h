#pragma once
#include <Modloader/app/structs/RigidbodyTranslationAnimatorEntity.h>
#include <Modloader/app/structs/RigidbodyTranslationAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyTranslationAnimatorEntity {
        inline app::RigidbodyTranslationAnimatorEntity__Class** type_info() {
            static app::RigidbodyTranslationAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyTranslationAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyTranslationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyTranslationAnimatorEntity__Class>(type_info(), "Moon.Timeline", "RigidbodyTranslationAnimatorEntity");
        }
        inline app::RigidbodyTranslationAnimatorEntity* create() {
            return il2cpp::create_object<app::RigidbodyTranslationAnimatorEntity>(get_class());
        }
    } // namespace RigidbodyTranslationAnimatorEntity
} // namespace app::classes::types
