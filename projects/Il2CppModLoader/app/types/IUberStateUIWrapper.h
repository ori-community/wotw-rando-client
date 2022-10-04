#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberStateUIWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberStateUIWrapper__Class** type_info;
        inline app::IUberStateUIWrapper__Class* get_class() {
            return il2cpp::get_class<app::IUberStateUIWrapper__Class>(type_info, "Moon.UberStateVisualization", "IUberStateUIWrapper");
        }
    } // namespace IUberStateUIWrapper
} // namespace app::classes::types
