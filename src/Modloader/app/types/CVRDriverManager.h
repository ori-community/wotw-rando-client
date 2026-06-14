#pragma once
#include <Modloader/app/structs/CVRDriverManager.h>
#include <Modloader/app/structs/CVRDriverManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRDriverManager {
        inline app::CVRDriverManager__Class** type_info() {
            static app::CVRDriverManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CVRDriverManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CVRDriverManager__Class* get_class() {
            return il2cpp::get_class<app::CVRDriverManager__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRDriverManager");
        }
        inline app::CVRDriverManager* create() {
            return il2cpp::create_object<app::CVRDriverManager>(get_class());
        }
    } // namespace CVRDriverManager
} // namespace app::classes::types
