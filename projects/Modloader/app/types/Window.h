#pragma once
#include <Modloader/app/structs/Window.h>
#include <Modloader/app/structs/Window__Array.h>
#include <Modloader/app/structs/Window__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Window {
        inline app::Window__Class** type_info() {
            static app::Window__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Window__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Window__Class* get_class() {
            return il2cpp::get_class<app::Window__Class>(type_info(), "Moon.UI", "Window");
        }
        inline app::Window* create() {
            return il2cpp::create_object<app::Window>(get_class());
        }
        inline app::Window__Array* create_array(int size) {
            return il2cpp::array_new<app::Window__Array>(get_class(), size);
        }
        inline app::Window__Array* create_array(const std::vector<app::Window*>& items) {
            return il2cpp::array_new<app::Window__Array>(get_class(), items);
        }
    } // namespace Window
} // namespace app::classes::types
