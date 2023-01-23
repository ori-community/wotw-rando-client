#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextMeshTorusRenderer__Class.h>
#include <Modloader/app/structs/TextMeshTorusRenderer.h>

namespace app::classes::types {
    namespace TextMeshTorusRenderer {
        namespace {
            inline app::TextMeshTorusRenderer__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshTorusRenderer__Class** type_info = &type_info_ref;
        inline app::TextMeshTorusRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusRenderer__Class>(type_info, "CatlikeCoding.TextBox", "TextMeshTorusRenderer");
        }
        inline app::TextMeshTorusRenderer* create() {
            return il2cpp::create_object<app::TextMeshTorusRenderer>(get_class());
        }
    } // namespace TextMeshTorusRenderer
} // namespace app::classes::types
