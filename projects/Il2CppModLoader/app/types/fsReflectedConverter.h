#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsReflectedConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsReflectedConverter__Class** type_info;
        inline app::fsReflectedConverter__Class* get_class() {
            return il2cpp::get_class<app::fsReflectedConverter__Class>(type_info, "FullSerializer.Internal", "fsReflectedConverter");
        }
        inline app::fsReflectedConverter* create() {
            return il2cpp::create_object<app::fsReflectedConverter>(get_class());
        }
    } // namespace fsReflectedConverter
} // namespace app::classes::types
