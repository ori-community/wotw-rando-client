#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimation__Array {
        namespace {
            app::TextureAnimation__Array__Class* type_info_ref = nullptr;
        }
        app::TextureAnimation__Array__Class** type_info = &type_info_ref;
        inline app::TextureAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimation__Array__Class>(type_info, "", "TextureAnimation[]");
        }
        inline app::TextureAnimation__Array* create() {
            return il2cpp::create_object<app::TextureAnimation__Array>(get_class());
        }
    } // namespace TextureAnimation__Array
} // namespace app::classes::types
