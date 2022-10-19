#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChallengeShrineAnimatorEntity {
        namespace {
            inline app::ChallengeShrineAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::ChallengeShrineAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineAnimatorEntity__Class>(type_info, "", "ChallengeShrineAnimatorEntity");
        }
        inline app::ChallengeShrineAnimatorEntity* create() {
            return il2cpp::create_object<app::ChallengeShrineAnimatorEntity>(get_class());
        }
    } // namespace ChallengeShrineAnimatorEntity
} // namespace app::classes::types
