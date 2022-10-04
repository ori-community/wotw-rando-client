#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBuildInformationProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBuildInformationProvider__Class** type_info;
        inline app::IBuildInformationProvider__Class* get_class() {
            return il2cpp::get_class<app::IBuildInformationProvider__Class>(type_info, "", "IBuildInformationProvider");
        }
    } // namespace IBuildInformationProvider
} // namespace app::classes::types
