#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonControllerColliderHit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonControllerColliderHit__Class** type_info;
        inline app::MoonControllerColliderHit__Class* get_class() {
            return il2cpp::get_class<app::MoonControllerColliderHit__Class>(type_info, "", "MoonControllerColliderHit");
        }
        inline app::MoonControllerColliderHit* create() {
            return il2cpp::create_object<app::MoonControllerColliderHit>(get_class());
        }
        inline app::MoonControllerColliderHit__Boxed* box(app::MoonControllerColliderHit value) {
            return il2cpp::box_value<app::MoonControllerColliderHit__Boxed>(get_class(), value);
        }
    } // namespace MoonControllerColliderHit
} // namespace app::classes::types
