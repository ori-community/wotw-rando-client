#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshTorusRenderer_1 {
        namespace {
            inline app::TextMeshTorusRenderer_1__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshTorusRenderer_1__Class** type_info = &type_info_ref;
        inline app::TextMeshTorusRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusRenderer_1__Class>(type_info, "Moon.UI", "TextMeshTorusRenderer");
        }
        inline app::TextMeshTorusRenderer_1* create() {
            return il2cpp::create_object<app::TextMeshTorusRenderer_1>(get_class());
        }
    } // namespace TextMeshTorusRenderer_1
} // namespace app::classes::types
