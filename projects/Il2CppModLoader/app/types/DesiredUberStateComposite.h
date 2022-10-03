#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateComposite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesiredUberStateComposite__Class** type_info;
        inline app::DesiredUberStateComposite__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateComposite__Class>(type_info, "", "DesiredUberStateComposite");
        }
        inline app::DesiredUberStateComposite* create() {
            return il2cpp::create_object<app::DesiredUberStateComposite>(get_class());
        }
    } // namespace DesiredUberStateComposite
} // namespace app::classes::types
