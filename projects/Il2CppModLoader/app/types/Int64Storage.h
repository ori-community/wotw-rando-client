#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int64Storage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int64Storage__Class** type_info;
        inline app::Int64Storage__Class* get_class() {
            return il2cpp::get_class<app::Int64Storage__Class>(type_info, "System.Data.Common", "Int64Storage");
        }
        inline app::Int64Storage* create() {
            return il2cpp::create_object<app::Int64Storage>(get_class());
        }
    } // namespace Int64Storage
} // namespace app::classes::types
