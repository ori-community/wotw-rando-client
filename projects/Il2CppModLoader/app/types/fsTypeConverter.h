#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsTypeConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsTypeConverter__Class** type_info;
        inline app::fsTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::fsTypeConverter__Class>(type_info, "FullSerializer.Internal", "fsTypeConverter");
        }
        inline app::fsTypeConverter* create() {
            return il2cpp::create_object<app::fsTypeConverter>(get_class());
        }
    } // namespace fsTypeConverter
} // namespace app::classes::types
