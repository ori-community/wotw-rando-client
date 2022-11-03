#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QualitySettings {
        namespace {
            inline app::QualitySettings__Class* type_info_ref = nullptr;
        }
        inline app::QualitySettings__Class** type_info = &type_info_ref;
        inline app::QualitySettings__Class* get_class() {
            return il2cpp::get_class<app::QualitySettings__Class>(type_info, "UnityEngine", "QualitySettings");
        }
        inline app::QualitySettings* create() {
            return il2cpp::create_object<app::QualitySettings>(get_class());
        }
    } // namespace QualitySettings
} // namespace app::classes::types
