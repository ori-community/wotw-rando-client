#pragma once
#include <Modloader/app/structs/Application.h>
#include <Modloader/app/structs/Application__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Application {
        inline app::Application__Class** type_info() {
            static app::Application__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Application__Class**)(modloader::win::memory::resolve_rva(0x04786260));
            }
            return cache;
        }
        inline app::Application__Class* get_class() {
            return il2cpp::get_class<app::Application__Class>(type_info(), "UnityEngine", "Application");
        }
        inline app::Application* create() {
            return il2cpp::create_object<app::Application>(get_class());
        }
    } // namespace Application
} // namespace app::classes::types
