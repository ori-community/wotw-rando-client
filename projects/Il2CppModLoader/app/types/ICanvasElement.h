#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICanvasElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICanvasElement__Class** type_info;
        inline app::ICanvasElement__Class* get_class() {
            return il2cpp::get_class<app::ICanvasElement__Class>(type_info, "UnityEngine.UI", "ICanvasElement");
        }
        inline app::ICanvasElement* create() {
            return il2cpp::create_object<app::ICanvasElement>(get_class());
        }
        inline app::ICanvasElement__Array* create_array(int size) {
            return il2cpp::array_new<app::ICanvasElement__Array>(get_class(), size);
        }
    } // namespace ICanvasElement
} // namespace app::classes::types
