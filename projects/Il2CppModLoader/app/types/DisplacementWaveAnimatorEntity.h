#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisplacementWaveAnimatorEntity {
        namespace {
            inline app::DisplacementWaveAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::DisplacementWaveAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::DisplacementWaveAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::DisplacementWaveAnimatorEntity__Class>(type_info, "Moon.Timeline", "DisplacementWaveAnimatorEntity");
        }
        inline app::DisplacementWaveAnimatorEntity* create() {
            return il2cpp::create_object<app::DisplacementWaveAnimatorEntity>(get_class());
        }
    } // namespace DisplacementWaveAnimatorEntity
} // namespace app::classes::types
