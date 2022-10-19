#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicValueProvider {
        inline app::DynamicValueProvider__Class** type_info = (app::DynamicValueProvider__Class**)(modloader::win::memory::resolve_rva(0x0478DDB0));
        inline app::DynamicValueProvider__Class* get_class() {
            return il2cpp::get_class<app::DynamicValueProvider__Class>(type_info, "Newtonsoft.Json.Serialization", "DynamicValueProvider");
        }
        inline app::DynamicValueProvider* create() {
            return il2cpp::create_object<app::DynamicValueProvider>(get_class());
        }
    } // namespace DynamicValueProvider
} // namespace app::classes::types
