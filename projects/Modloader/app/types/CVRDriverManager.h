#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CVRDriverManager__Class.h>
#include <Modloader/app/structs/CVRDriverManager.h>

namespace app::classes::types {
    namespace CVRDriverManager {
        namespace {
            inline app::CVRDriverManager__Class* type_info_ref = nullptr;
        }
        inline app::CVRDriverManager__Class** type_info = &type_info_ref;
        inline app::CVRDriverManager__Class* get_class() {
            return il2cpp::get_class<app::CVRDriverManager__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRDriverManager");
        }
        inline app::CVRDriverManager* create() {
            return il2cpp::create_object<app::CVRDriverManager>(get_class());
        }
    } // namespace CVRDriverManager
} // namespace app::classes::types
