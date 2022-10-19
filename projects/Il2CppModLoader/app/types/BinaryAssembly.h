#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryAssembly {
        inline app::BinaryAssembly__Class** type_info = (app::BinaryAssembly__Class**)(modloader::win::memory::resolve_rva(0x04724E98));
        inline app::BinaryAssembly__Class* get_class() {
            return il2cpp::get_class<app::BinaryAssembly__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssembly");
        }
        inline app::BinaryAssembly* create() {
            return il2cpp::create_object<app::BinaryAssembly>(get_class());
        }
    } // namespace BinaryAssembly
} // namespace app::classes::types
