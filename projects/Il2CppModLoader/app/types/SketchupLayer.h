#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SketchupLayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SketchupLayer__Class** type_info;
        inline app::SketchupLayer__Class* get_class() {
            return il2cpp::get_class<app::SketchupLayer__Class>(type_info, "", "SketchupLayer");
        }
        inline app::SketchupLayer* create() {
            return il2cpp::create_object<app::SketchupLayer>(get_class());
        }
    } // namespace SketchupLayer
} // namespace app::classes::types
