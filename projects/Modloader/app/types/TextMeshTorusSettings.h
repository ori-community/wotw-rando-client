#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshTorusSettings {
        namespace {
            inline app::TextMeshTorusSettings__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshTorusSettings__Class** type_info = &type_info_ref;
        inline app::TextMeshTorusSettings__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusSettings__Class>(type_info, "CatlikeCoding.TextBox", "TextMeshTorusSettings");
        }
        inline app::TextMeshTorusSettings* create() {
            return il2cpp::create_object<app::TextMeshTorusSettings>(get_class());
        }
    } // namespace TextMeshTorusSettings
} // namespace app::classes::types
