#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LehmerRng {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LehmerRng__Class** type_info;
        inline app::LehmerRng__Class* get_class() {
            return il2cpp::get_class<app::LehmerRng__Class>(type_info, "Moon", "LehmerRng");
        }
        inline app::LehmerRng* create() {
            return il2cpp::create_object<app::LehmerRng>(get_class());
        }
    } // namespace LehmerRng
} // namespace app::classes::types
