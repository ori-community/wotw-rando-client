#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RigidbodyTranslationAnimatorEntity__Class.h>
#include <Modloader/app/structs/RigidbodyTranslationAnimatorEntity.h>

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
