#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitFlash3DNew {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HitFlash3DNew__Class** type_info;
        inline app::HitFlash3DNew__Class* get_class() {
            return il2cpp::get_class<app::HitFlash3DNew__Class>(type_info, "", "HitFlash3DNew");
        }
        inline app::HitFlash3DNew* create() {
            return il2cpp::create_object<app::HitFlash3DNew>(get_class());
        }
    } // namespace HitFlash3DNew
} // namespace app::classes::types
