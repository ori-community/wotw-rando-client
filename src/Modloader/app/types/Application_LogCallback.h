#pragma once
#include <Modloader/app/structs/Application_LogCallback.h>
#include <Modloader/app/structs/Application_LogCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Application_LogCallback {
        inline app::Application_LogCallback__Class** type_info() {
            static app::Application_LogCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Application_LogCallback__Class**)(modloader::win::memory::resolve_rva(0x047985C0));
            }
            return cache;
        }
        inline app::Application_LogCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_LogCallback__Class>(type_info(), "UnityEngine", "Application", "LogCallback");
        }
        inline app::Application_LogCallback* create() {
            return il2cpp::create_object<app::Application_LogCallback>(get_class());
        }
    } // namespace Application_LogCallback
} // namespace app::classes::types
