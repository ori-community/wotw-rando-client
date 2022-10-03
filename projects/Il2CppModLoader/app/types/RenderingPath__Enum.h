#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderingPath__Enum {
        namespace {
            app::RenderingPath__Enum__Class* type_info_ref = nullptr;
        }
        app::RenderingPath__Enum__Class** type_info = &type_info_ref;
        inline app::RenderingPath__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderingPath__Enum__Class>(type_info, "UnityEngine", "RenderingPath");
        }
        inline app::RenderingPath__Enum* create() {
            return il2cpp::create_object<app::RenderingPath__Enum>(get_class());
        }
    } // namespace RenderingPath__Enum
} // namespace app::classes::types
