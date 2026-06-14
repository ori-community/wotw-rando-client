#pragma once
#include <Modloader/app/structs/AtlasSpriteTexture__Array.h>
#include <Modloader/app/structs/AtlasSpriteTexture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AtlasSpriteTexture__Array {
        inline app::AtlasSpriteTexture__Array__Class** type_info() {
            static app::AtlasSpriteTexture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AtlasSpriteTexture__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AtlasSpriteTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::AtlasSpriteTexture__Array__Class>(type_info(), "", "AtlasSpriteTexture[]");
        }
        inline app::AtlasSpriteTexture__Array* create() {
            return il2cpp::create_object<app::AtlasSpriteTexture__Array>(get_class());
        }
    } // namespace AtlasSpriteTexture__Array
} // namespace app::classes::types
