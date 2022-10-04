#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDesignerHost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDesignerHost__Class** type_info;
        inline app::IDesignerHost__Class* get_class() {
            return il2cpp::get_class<app::IDesignerHost__Class>(type_info, "System.ComponentModel.Design", "IDesignerHost");
        }
    } // namespace IDesignerHost
} // namespace app::classes::types
