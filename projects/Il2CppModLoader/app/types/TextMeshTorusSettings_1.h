#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshTorusSettings_1 {
        namespace {
            inline app::TextMeshTorusSettings_1__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshTorusSettings_1__Class** type_info = &type_info_ref;
        inline app::TextMeshTorusSettings_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusSettings_1__Class>(type_info, "Moon.UI", "TextMeshTorusSettings");
        }
        inline app::TextMeshTorusSettings_1* create() {
            return il2cpp::create_object<app::TextMeshTorusSettings_1>(get_class());
        }
    } // namespace TextMeshTorusSettings_1
} // namespace app::classes::types
