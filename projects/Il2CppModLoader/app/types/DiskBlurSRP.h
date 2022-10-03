#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DiskBlurSRP {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DiskBlurSRP__Class** type_info;
        inline app::DiskBlurSRP__Class* get_class() {
            return il2cpp::get_class<app::DiskBlurSRP__Class>(type_info, "Moon.Rendering", "DiskBlurSRP");
        }
        inline app::DiskBlurSRP* create() {
            return il2cpp::create_object<app::DiskBlurSRP>(get_class());
        }
    } // namespace DiskBlurSRP
} // namespace app::classes::types
