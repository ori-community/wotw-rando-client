#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Grayscale {
        namespace {
            app::Grayscale__Class* type_info_ref = nullptr;
        }
        app::Grayscale__Class** type_info = &type_info_ref;
        inline app::Grayscale__Class* get_class() {
            return il2cpp::get_class<app::Grayscale__Class>(type_info, "Colorful", "Grayscale");
        }
        inline app::Grayscale* create() {
            return il2cpp::create_object<app::Grayscale>(get_class());
        }
    } // namespace Grayscale
} // namespace app::classes::types
