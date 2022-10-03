#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsWeakReferenceConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsWeakReferenceConverter__Class** type_info;
        inline app::fsWeakReferenceConverter__Class* get_class() {
            return il2cpp::get_class<app::fsWeakReferenceConverter__Class>(type_info, "FullSerializer.Internal", "fsWeakReferenceConverter");
        }
        inline app::fsWeakReferenceConverter* create() {
            return il2cpp::create_object<app::fsWeakReferenceConverter>(get_class());
        }
    } // namespace fsWeakReferenceConverter
} // namespace app::classes::types
