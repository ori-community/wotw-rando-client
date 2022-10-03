#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExternalForceEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExternalForceEntry__Class** type_info;
        inline app::ExternalForceEntry__Class* get_class() {
            return il2cpp::get_class<app::ExternalForceEntry__Class>(type_info, "", "ExternalForceEntry");
        }
        inline app::ExternalForceEntry* create() {
            return il2cpp::create_object<app::ExternalForceEntry>(get_class());
        }
        inline app::ExternalForceEntry__Boxed* box(app::ExternalForceEntry value) {
            return il2cpp::box_value<app::ExternalForceEntry__Boxed>(get_class(), value);
        }
        inline app::ExternalForceEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ExternalForceEntry__Array>(get_class(), size);
        }
    } // namespace ExternalForceEntry
} // namespace app::classes::types
