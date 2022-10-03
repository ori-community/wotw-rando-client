#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HWStack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HWStack__Class** type_info;
        inline app::HWStack__Class* get_class() {
            return il2cpp::get_class<app::HWStack__Class>(type_info, "System.Xml", "HWStack");
        }
        inline app::HWStack* create() {
            return il2cpp::create_object<app::HWStack>(get_class());
        }
    } // namespace HWStack
} // namespace app::classes::types
