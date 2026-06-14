#pragma once
#include <Modloader/app/structs/ApplicationQuit.h>
#include <Modloader/app/structs/ApplicationQuit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplicationQuit {
        inline app::ApplicationQuit__Class** type_info() {
            static app::ApplicationQuit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplicationQuit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplicationQuit__Class* get_class() {
            return il2cpp::get_class<app::ApplicationQuit__Class>(type_info(), "RootMotion.Demos", "ApplicationQuit");
        }
        inline app::ApplicationQuit* create() {
            return il2cpp::create_object<app::ApplicationQuit>(get_class());
        }
    } // namespace ApplicationQuit
} // namespace app::classes::types
