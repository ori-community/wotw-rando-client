#pragma once
#include <Modloader/app/structs/DisplacementWaveAnimatorEntity.h>
#include <Modloader/app/structs/DisplacementWaveAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisplacementWaveAnimatorEntity {
        inline app::DisplacementWaveAnimatorEntity__Class** type_info() {
            static app::DisplacementWaveAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisplacementWaveAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisplacementWaveAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::DisplacementWaveAnimatorEntity__Class>(type_info(), "Moon.Timeline", "DisplacementWaveAnimatorEntity");
        }
        inline app::DisplacementWaveAnimatorEntity* create() {
            return il2cpp::create_object<app::DisplacementWaveAnimatorEntity>(get_class());
        }
    } // namespace DisplacementWaveAnimatorEntity
} // namespace app::classes::types
