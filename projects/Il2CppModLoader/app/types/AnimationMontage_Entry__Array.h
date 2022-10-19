#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMontage_Entry__Array {
        namespace {
            inline app::AnimationMontage_Entry__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationMontage_Entry__Array__Class** type_info = &type_info_ref;
        inline app::AnimationMontage_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontage_Entry__Array__Class>(type_info, "Moon", "AnimationMontage+Entry[]");
        }
        inline app::AnimationMontage_Entry__Array* create() {
            return il2cpp::create_object<app::AnimationMontage_Entry__Array>(get_class());
        }
    } // namespace AnimationMontage_Entry__Array
} // namespace app::classes::types
