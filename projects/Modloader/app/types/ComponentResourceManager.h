#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComponentResourceManager {
        namespace {
            inline app::ComponentResourceManager__Class* type_info_ref = nullptr;
        }
        inline app::ComponentResourceManager__Class** type_info = &type_info_ref;
        inline app::ComponentResourceManager__Class* get_class() {
            return il2cpp::get_class<app::ComponentResourceManager__Class>(type_info, "System.ComponentModel", "ComponentResourceManager");
        }
        inline app::ComponentResourceManager* create() {
            return il2cpp::create_object<app::ComponentResourceManager>(get_class());
        }
    } // namespace ComponentResourceManager
} // namespace app::classes::types
