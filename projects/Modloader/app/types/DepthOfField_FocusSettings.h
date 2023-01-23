#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DepthOfField_FocusSettings__Class.h>
#include <Modloader/app/structs/DepthOfField_FocusSettings.h>
#include <Modloader/app/structs/DepthOfField_FocusSettings__Boxed.h>

namespace app::classes::types {
    namespace DepthOfField_FocusSettings {
        namespace {
            inline app::DepthOfField_FocusSettings__Class* type_info_ref = nullptr;
        }
        inline app::DepthOfField_FocusSettings__Class** type_info = &type_info_ref;
        inline app::DepthOfField_FocusSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_FocusSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField", "FocusSettings");
        }
        inline app::DepthOfField_FocusSettings* create() {
            return il2cpp::create_object<app::DepthOfField_FocusSettings>(get_class());
        }
        inline app::DepthOfField_FocusSettings__Boxed* box(app::DepthOfField_FocusSettings value) {
            return il2cpp::box_value<app::DepthOfField_FocusSettings__Boxed>(get_class(), value);
        }
    } // namespace DepthOfField_FocusSettings
} // namespace app::classes::types
