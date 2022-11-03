#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LayoutElement {
        namespace {
            inline app::LayoutElement__Class* type_info_ref = nullptr;
        }
        inline app::LayoutElement__Class** type_info = &type_info_ref;
        inline app::LayoutElement__Class* get_class() {
            return il2cpp::get_class<app::LayoutElement__Class>(type_info, "UnityEngine.UI", "LayoutElement");
        }
        inline app::LayoutElement* create() {
            return il2cpp::create_object<app::LayoutElement>(get_class());
        }
    } // namespace LayoutElement
} // namespace app::classes::types
