#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AtlasSpriteTexture__Array {
        namespace {
            app::AtlasSpriteTexture__Array__Class* type_info_ref = nullptr;
        }
        app::AtlasSpriteTexture__Array__Class** type_info = &type_info_ref;
        inline app::AtlasSpriteTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::AtlasSpriteTexture__Array__Class>(type_info, "", "AtlasSpriteTexture[]");
        }
        inline app::AtlasSpriteTexture__Array* create() {
            return il2cpp::create_object<app::AtlasSpriteTexture__Array>(get_class());
        }
    } // namespace AtlasSpriteTexture__Array
} // namespace app::classes::types
