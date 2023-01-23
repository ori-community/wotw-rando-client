#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SMAA_QualitySettings__Class.h>
#include <Modloader/app/structs/SMAA_QualitySettings.h>
#include <Modloader/app/structs/SMAA_QualitySettings__Boxed.h>
#include <Modloader/app/structs/SMAA_QualitySettings__Array.h>

namespace app::classes::types {
    namespace SMAA_QualitySettings {
        inline app::SMAA_QualitySettings__Class** type_info = (app::SMAA_QualitySettings__Class**)(modloader::win::memory::resolve_rva(0x04777208));
        inline app::SMAA_QualitySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_QualitySettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "QualitySettings");
        }
        inline app::SMAA_QualitySettings* create() {
            return il2cpp::create_object<app::SMAA_QualitySettings>(get_class());
        }
        inline app::SMAA_QualitySettings__Boxed* box(app::SMAA_QualitySettings value) {
            return il2cpp::box_value<app::SMAA_QualitySettings__Boxed>(get_class(), value);
        }
        inline app::SMAA_QualitySettings__Array* create_array(int size) {
            return il2cpp::array_new<app::SMAA_QualitySettings__Array>(get_class(), size);
        }
        inline app::SMAA_QualitySettings__Array* create_array(const std::vector<app::SMAA_QualitySettings>& items) {
            return il2cpp::array_new<app::SMAA_QualitySettings__Array>(get_class(), items);
        }
    } // namespace SMAA_QualitySettings
} // namespace app::classes::types
