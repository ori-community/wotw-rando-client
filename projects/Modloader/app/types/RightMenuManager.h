#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RightMenuManager {
        namespace {
            inline app::RightMenuManager__Class* type_info_ref = nullptr;
        }
        inline app::RightMenuManager__Class** type_info = &type_info_ref;
        inline app::RightMenuManager__Class* get_class() {
            return il2cpp::get_class<app::RightMenuManager__Class>(type_info, "", "RightMenuManager");
        }
        inline app::RightMenuManager* create() {
            return il2cpp::create_object<app::RightMenuManager>(get_class());
        }
    } // namespace RightMenuManager
} // namespace app::classes::types
