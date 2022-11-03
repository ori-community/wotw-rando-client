#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneNavigationInfo {
        namespace {
            inline app::SceneNavigationInfo__Class* type_info_ref = nullptr;
        }
        inline app::SceneNavigationInfo__Class** type_info = &type_info_ref;
        inline app::SceneNavigationInfo__Class* get_class() {
            return il2cpp::get_class<app::SceneNavigationInfo__Class>(type_info, "", "SceneNavigationInfo");
        }
        inline app::SceneNavigationInfo* create() {
            return il2cpp::create_object<app::SceneNavigationInfo>(get_class());
        }
    } // namespace SceneNavigationInfo
} // namespace app::classes::types
