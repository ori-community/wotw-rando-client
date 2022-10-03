#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Strokes_ColorMode__Enum {
        namespace {
            app::Strokes_ColorMode__Enum__Class* type_info_ref = nullptr;
        }
        app::Strokes_ColorMode__Enum__Class** type_info = &type_info_ref;
        inline app::Strokes_ColorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Strokes_ColorMode__Enum__Class>(type_info, "Colorful", "Strokes", "ColorMode");
        }
        inline app::Strokes_ColorMode__Enum* create() {
            return il2cpp::create_object<app::Strokes_ColorMode__Enum>(get_class());
        }
    } // namespace Strokes_ColorMode__Enum
} // namespace app::classes::types
