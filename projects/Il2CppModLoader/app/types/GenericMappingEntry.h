#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericMappingEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericMappingEntry__Class** type_info;
        inline app::GenericMappingEntry__Class* get_class() {
            return il2cpp::get_class<app::GenericMappingEntry__Class>(type_info, "", "GenericMappingEntry");
        }
        inline app::GenericMappingEntry* create() {
            return il2cpp::create_object<app::GenericMappingEntry>(get_class());
        }
        inline app::GenericMappingEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericMappingEntry__Array>(get_class(), size);
        }
    } // namespace GenericMappingEntry
} // namespace app::classes::types
