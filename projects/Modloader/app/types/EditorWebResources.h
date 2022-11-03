#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EditorWebResources {
        namespace {
            inline app::EditorWebResources__Class* type_info_ref = nullptr;
        }
        inline app::EditorWebResources__Class** type_info = &type_info_ref;
        inline app::EditorWebResources__Class* get_class() {
            return il2cpp::get_class<app::EditorWebResources__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "EditorWebResources");
        }
        inline app::EditorWebResources* create() {
            return il2cpp::create_object<app::EditorWebResources>(get_class());
        }
    } // namespace EditorWebResources
} // namespace app::classes::types
