#pragma once
#include <Modloader/app/structs/Window__Array.h>
#include <Modloader/app/structs/Window__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Window__Array {
        inline app::Window__Array__Class** type_info() {
            static app::Window__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Window__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Window__Array__Class* get_class() {
            return il2cpp::get_class<app::Window__Array__Class>(type_info(), "Moon.UI", "Window[]");
        }
        inline app::Window__Array* create() {
            return il2cpp::create_object<app::Window__Array>(get_class());
        }
    } // namespace Window__Array
} // namespace app::classes::types
