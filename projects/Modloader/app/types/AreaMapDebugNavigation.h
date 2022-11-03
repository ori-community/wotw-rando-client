#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapDebugNavigation {
        namespace {
            inline app::AreaMapDebugNavigation__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapDebugNavigation__Class** type_info = &type_info_ref;
        inline app::AreaMapDebugNavigation__Class* get_class() {
            return il2cpp::get_class<app::AreaMapDebugNavigation__Class>(type_info, "", "AreaMapDebugNavigation");
        }
        inline app::AreaMapDebugNavigation* create() {
            return il2cpp::create_object<app::AreaMapDebugNavigation>(get_class());
        }
    } // namespace AreaMapDebugNavigation
} // namespace app::classes::types
