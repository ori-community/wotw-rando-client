#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IExtenderListService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IExtenderListService__Class** type_info;
        inline app::IExtenderListService__Class* get_class() {
            return il2cpp::get_class<app::IExtenderListService__Class>(type_info, "System.ComponentModel.Design", "IExtenderListService");
        }
    } // namespace IExtenderListService
} // namespace app::classes::types
