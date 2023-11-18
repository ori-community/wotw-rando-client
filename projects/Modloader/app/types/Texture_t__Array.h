#pragma once
#include <Modloader/app/structs/Texture_t__Array.h>
#include <Modloader/app/structs/Texture_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Texture_t__Array {
        inline app::Texture_t__Array__Class** type_info() {
            static app::Texture_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Texture_t__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Texture_t__Array__Class* get_class() {
            return il2cpp::get_class<app::Texture_t__Array__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "Texture_t[]");
        }
        inline app::Texture_t__Array* create() {
            return il2cpp::create_object<app::Texture_t__Array>(get_class());
        }
    } // namespace Texture_t__Array
} // namespace app::classes::types
