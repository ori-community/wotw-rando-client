#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QualityProfile {
        namespace {
            inline app::QualityProfile__Class* type_info_ref = nullptr;
        }
        inline app::QualityProfile__Class** type_info = &type_info_ref;
        inline app::QualityProfile__Class* get_class() {
            return il2cpp::get_class<app::QualityProfile__Class>(type_info, "Moon.Rendering", "QualityProfile");
        }
        inline app::QualityProfile* create() {
            return il2cpp::create_object<app::QualityProfile>(get_class());
        }
    } // namespace QualityProfile
} // namespace app::classes::types
