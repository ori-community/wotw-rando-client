#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDesigner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDesigner__Class** type_info;
        inline app::IDesigner__Class* get_class() {
            return il2cpp::get_class<app::IDesigner__Class>(type_info, "System.ComponentModel.Design", "IDesigner");
        }
    } // namespace IDesigner
} // namespace app::classes::types
