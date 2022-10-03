#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChromaticAberration {
        namespace {
            app::ChromaticAberration__Class* type_info_ref = nullptr;
        }
        app::ChromaticAberration__Class** type_info = &type_info_ref;
        inline app::ChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::ChromaticAberration__Class>(type_info, "Colorful", "ChromaticAberration");
        }
        inline app::ChromaticAberration* create() {
            return il2cpp::create_object<app::ChromaticAberration>(get_class());
        }
    } // namespace ChromaticAberration
} // namespace app::classes::types
