#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FireStickManager__Class.h>
#include <Modloader/app/structs/FireStickManager.h>

namespace app::classes::types {
    namespace FireStickManager {
        namespace {
            inline app::FireStickManager__Class* type_info_ref = nullptr;
        }
        inline app::FireStickManager__Class** type_info = &type_info_ref;
        inline app::FireStickManager__Class* get_class() {
            return il2cpp::get_class<app::FireStickManager__Class>(type_info, "", "FireStickManager");
        }
        inline app::FireStickManager* create() {
            return il2cpp::create_object<app::FireStickManager>(get_class());
        }
    } // namespace FireStickManager
} // namespace app::classes::types
