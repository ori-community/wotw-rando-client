#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsForwardConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsForwardConverter__Class** type_info;
        inline app::fsForwardConverter__Class* get_class() {
            return il2cpp::get_class<app::fsForwardConverter__Class>(type_info, "FullSerializer.Internal", "fsForwardConverter");
        }
        inline app::fsForwardConverter* create() {
            return il2cpp::create_object<app::fsForwardConverter>(get_class());
        }
    } // namespace fsForwardConverter
} // namespace app::classes::types
