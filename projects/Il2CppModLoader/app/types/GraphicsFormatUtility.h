#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicsFormatUtility {
        namespace {
            app::GraphicsFormatUtility__Class* type_info_ref = nullptr;
        }
        app::GraphicsFormatUtility__Class** type_info = &type_info_ref;
        inline app::GraphicsFormatUtility__Class* get_class() {
            return il2cpp::get_class<app::GraphicsFormatUtility__Class>(type_info, "UnityEngine.Experimental.Rendering", "GraphicsFormatUtility");
        }
        inline app::GraphicsFormatUtility* create() {
            return il2cpp::create_object<app::GraphicsFormatUtility>(get_class());
        }
    } // namespace GraphicsFormatUtility
} // namespace app::classes::types
