#pragma once
#include <Modloader/app/structs/WindowManager.h>
#include <Modloader/app/structs/WindowManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindowManager {
        inline app::WindowManager__Class** type_info() {
            static app::WindowManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindowManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindowManager__Class* get_class() {
            return il2cpp::get_class<app::WindowManager__Class>(type_info(), "", "WindowManager");
        }
        inline app::WindowManager* create() {
            return il2cpp::create_object<app::WindowManager>(get_class());
        }
    } // namespace WindowManager
} // namespace app::classes::types
