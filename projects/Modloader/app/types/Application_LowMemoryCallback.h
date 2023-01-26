#pragma once
#include <Modloader/app/structs/Application_LowMemoryCallback.h>
#include <Modloader/app/structs/Application_LowMemoryCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Application_LowMemoryCallback {
        inline app::Application_LowMemoryCallback__Class** type_info() {
            static app::Application_LowMemoryCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Application_LowMemoryCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Application_LowMemoryCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_LowMemoryCallback__Class>(type_info(), "UnityEngine", "Application", "LowMemoryCallback");
        }
        inline app::Application_LowMemoryCallback* create() {
            return il2cpp::create_object<app::Application_LowMemoryCallback>(get_class());
        }
    } // namespace Application_LowMemoryCallback
} // namespace app::classes::types
