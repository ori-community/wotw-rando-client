#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrawRendererFlags__Enum {
        namespace {
            inline app::DrawRendererFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DrawRendererFlags__Enum__Class** type_info = &type_info_ref;
        inline app::DrawRendererFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererFlags__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "DrawRendererFlags");
        }
        inline app::DrawRendererFlags__Enum* create() {
            return il2cpp::create_object<app::DrawRendererFlags__Enum>(get_class());
        }
    } // namespace DrawRendererFlags__Enum
} // namespace app::classes::types
