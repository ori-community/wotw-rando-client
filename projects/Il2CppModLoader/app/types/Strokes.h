#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Strokes {
        namespace {
            app::Strokes__Class* type_info_ref = nullptr;
        }
        app::Strokes__Class** type_info = &type_info_ref;
        inline app::Strokes__Class* get_class() {
            return il2cpp::get_class<app::Strokes__Class>(type_info, "Colorful", "Strokes");
        }
        inline app::Strokes* create() {
            return il2cpp::create_object<app::Strokes>(get_class());
        }
    } // namespace Strokes
} // namespace app::classes::types
