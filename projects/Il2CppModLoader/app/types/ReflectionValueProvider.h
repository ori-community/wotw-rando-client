#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionValueProvider {
        inline app::ReflectionValueProvider__Class** type_info = (app::ReflectionValueProvider__Class**)(modloader::win::memory::resolve_rva(0x04709B18));
        inline app::ReflectionValueProvider__Class* get_class() {
            return il2cpp::get_class<app::ReflectionValueProvider__Class>(type_info, "Newtonsoft.Json.Serialization", "ReflectionValueProvider");
        }
        inline app::ReflectionValueProvider* create() {
            return il2cpp::create_object<app::ReflectionValueProvider>(get_class());
        }
    } // namespace ReflectionValueProvider
} // namespace app::classes::types
