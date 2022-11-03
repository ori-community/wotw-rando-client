#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeftMenuManager {
        namespace {
            inline app::LeftMenuManager__Class* type_info_ref = nullptr;
        }
        inline app::LeftMenuManager__Class** type_info = &type_info_ref;
        inline app::LeftMenuManager__Class* get_class() {
            return il2cpp::get_class<app::LeftMenuManager__Class>(type_info, "", "LeftMenuManager");
        }
        inline app::LeftMenuManager* create() {
            return il2cpp::create_object<app::LeftMenuManager>(get_class());
        }
    } // namespace LeftMenuManager
} // namespace app::classes::types
