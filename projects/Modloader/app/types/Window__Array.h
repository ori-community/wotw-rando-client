#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Window__Array__Class.h>
#include <Modloader/app/structs/Window__Array.h>

namespace app::classes::types {
    namespace Window__Array {
        namespace {
            inline app::Window__Array__Class* type_info_ref = nullptr;
        }
        inline app::Window__Array__Class** type_info = &type_info_ref;
        inline app::Window__Array__Class* get_class() {
            return il2cpp::get_class<app::Window__Array__Class>(type_info, "Moon.UI", "Window[]");
        }
        inline app::Window__Array* create() {
            return il2cpp::create_object<app::Window__Array>(get_class());
        }
    } // namespace Window__Array
} // namespace app::classes::types
