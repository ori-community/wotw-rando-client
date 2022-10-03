#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Record {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Record__Class** type_info;
        inline app::Record__Class* get_class() {
            return il2cpp::get_class<app::Record__Class>(type_info, "PhysicsDebugTools", "Record");
        }
        inline app::Record* create() {
            return il2cpp::create_object<app::Record>(get_class());
        }
        inline app::Record__Array* create_array(int size) {
            return il2cpp::array_new<app::Record__Array>(get_class(), size);
        }
    } // namespace Record
} // namespace app::classes::types
