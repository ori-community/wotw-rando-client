#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Texture_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Texture_t__Class** type_info;
        inline app::Texture_t__Class* get_class() {
            return il2cpp::get_class<app::Texture_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "Texture_t");
        }
        inline app::Texture_t* create() {
            return il2cpp::create_object<app::Texture_t>(get_class());
        }
        inline app::Texture_t__Boxed* box(app::Texture_t value) {
            return il2cpp::box_value<app::Texture_t__Boxed>(get_class(), value);
        }
        inline app::Texture_t__Array* create_array(int size) {
            return il2cpp::array_new<app::Texture_t__Array>(get_class(), size);
        }
    } // namespace Texture_t
} // namespace app::classes::types
