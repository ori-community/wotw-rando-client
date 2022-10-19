#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StandaloneWebResources_IndexEntry__Array {
        namespace {
            inline app::StandaloneWebResources_IndexEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::StandaloneWebResources_IndexEntry__Array__Class** type_info = &type_info_ref;
        inline app::StandaloneWebResources_IndexEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StandaloneWebResources_IndexEntry__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "StandaloneWebResources+IndexEntry[]");
        }
        inline app::StandaloneWebResources_IndexEntry__Array* create() {
            return il2cpp::create_object<app::StandaloneWebResources_IndexEntry__Array>(get_class());
        }
    } // namespace StandaloneWebResources_IndexEntry__Array
} // namespace app::classes::types
