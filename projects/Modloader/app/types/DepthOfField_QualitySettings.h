#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DepthOfField_QualitySettings__Class.h>
#include <Modloader/app/structs/DepthOfField_QualitySettings.h>
#include <Modloader/app/structs/DepthOfField_QualitySettings__Boxed.h>
#include <Modloader/app/structs/DepthOfField_QualitySettings__Array.h>

namespace app::classes::types {
    namespace DepthOfField_QualitySettings {
        inline app::DepthOfField_QualitySettings__Class** type_info = (app::DepthOfField_QualitySettings__Class**)(modloader::win::memory::resolve_rva(0x047421D8));
        inline app::DepthOfField_QualitySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_QualitySettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField", "QualitySettings");
        }
        inline app::DepthOfField_QualitySettings* create() {
            return il2cpp::create_object<app::DepthOfField_QualitySettings>(get_class());
        }
        inline app::DepthOfField_QualitySettings__Boxed* box(app::DepthOfField_QualitySettings value) {
            return il2cpp::box_value<app::DepthOfField_QualitySettings__Boxed>(get_class(), value);
        }
        inline app::DepthOfField_QualitySettings__Array* create_array(int size) {
            return il2cpp::array_new<app::DepthOfField_QualitySettings__Array>(get_class(), size);
        }
        inline app::DepthOfField_QualitySettings__Array* create_array(const std::vector<app::DepthOfField_QualitySettings>& items) {
            return il2cpp::array_new<app::DepthOfField_QualitySettings__Array>(get_class(), items);
        }
    } // namespace DepthOfField_QualitySettings
} // namespace app::classes::types
