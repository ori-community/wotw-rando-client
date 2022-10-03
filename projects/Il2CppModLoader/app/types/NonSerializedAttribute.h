#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NonSerializedAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NonSerializedAttribute__Class** type_info;
        inline app::NonSerializedAttribute__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedAttribute__Class>(type_info, "System", "NonSerializedAttribute");
        }
        inline app::NonSerializedAttribute* create() {
            return il2cpp::create_object<app::NonSerializedAttribute>(get_class());
        }
    } // namespace NonSerializedAttribute
} // namespace app::classes::types
