#pragma once
#include <Modloader/app/structs/SMAA_QualitySettings__Array.h>
#include <Modloader/app/structs/SMAA_QualitySettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SMAA_QualitySettings__Array {
        inline app::SMAA_QualitySettings__Array__Class** type_info() {
            static app::SMAA_QualitySettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SMAA_QualitySettings__Array__Class**)(modloader::win::memory::resolve_rva(0x04724410));
            }
            return cache;
        }
        inline app::SMAA_QualitySettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SMAA_QualitySettings__Array__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "SMAA+QualitySettings[]");
        }
        inline app::SMAA_QualitySettings__Array* create() {
            return il2cpp::create_object<app::SMAA_QualitySettings__Array>(get_class());
        }
    } // namespace SMAA_QualitySettings__Array
} // namespace app::classes::types
