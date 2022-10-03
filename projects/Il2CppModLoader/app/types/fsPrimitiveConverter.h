#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsPrimitiveConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsPrimitiveConverter__Class** type_info;
        inline app::fsPrimitiveConverter__Class* get_class() {
            return il2cpp::get_class<app::fsPrimitiveConverter__Class>(type_info, "FullSerializer.Internal", "fsPrimitiveConverter");
        }
        inline app::fsPrimitiveConverter* create() {
            return il2cpp::create_object<app::fsPrimitiveConverter>(get_class());
        }
    } // namespace fsPrimitiveConverter
} // namespace app::classes::types
