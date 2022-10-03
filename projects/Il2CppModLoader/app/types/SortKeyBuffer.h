#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SortKeyBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SortKeyBuffer__Class** type_info;
        inline app::SortKeyBuffer__Class* get_class() {
            return il2cpp::get_class<app::SortKeyBuffer__Class>(type_info, "Mono.Globalization.Unicode", "SortKeyBuffer");
        }
        inline app::SortKeyBuffer* create() {
            return il2cpp::create_object<app::SortKeyBuffer>(get_class());
        }
    } // namespace SortKeyBuffer
} // namespace app::classes::types
