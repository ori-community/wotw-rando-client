#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryAssemblyInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryAssemblyInfo__Class** type_info;
        inline app::BinaryAssemblyInfo__Class* get_class() {
            return il2cpp::get_class<app::BinaryAssemblyInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo");
        }
        inline app::BinaryAssemblyInfo* create() {
            return il2cpp::create_object<app::BinaryAssemblyInfo>(get_class());
        }
    } // namespace BinaryAssemblyInfo
} // namespace app::classes::types
