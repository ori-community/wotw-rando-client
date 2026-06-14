#pragma once
#include <Modloader/app/structs/OverridableTextureProperty__Array.h>
#include <Modloader/app/structs/OverridableTextureProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverridableTextureProperty__Array {
        inline app::OverridableTextureProperty__Array__Class** type_info() {
            static app::OverridableTextureProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OverridableTextureProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OverridableTextureProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::OverridableTextureProperty__Array__Class>(type_info(), "", "OverridableTextureProperty[]");
        }
        inline app::OverridableTextureProperty__Array* create() {
            return il2cpp::create_object<app::OverridableTextureProperty__Array>(get_class());
        }
    } // namespace OverridableTextureProperty__Array
} // namespace app::classes::types
