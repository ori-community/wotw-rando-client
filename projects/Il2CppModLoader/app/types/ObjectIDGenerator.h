#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectIDGenerator {
        inline app::ObjectIDGenerator__Class** type_info = (app::ObjectIDGenerator__Class**)(modloader::win::memory::resolve_rva(0x047497A8));
        inline app::ObjectIDGenerator__Class* get_class() {
            return il2cpp::get_class<app::ObjectIDGenerator__Class>(type_info, "System.Runtime.Serialization", "ObjectIDGenerator");
        }
        inline app::ObjectIDGenerator* create() {
            return il2cpp::create_object<app::ObjectIDGenerator>(get_class());
        }
    } // namespace ObjectIDGenerator
} // namespace app::classes::types
