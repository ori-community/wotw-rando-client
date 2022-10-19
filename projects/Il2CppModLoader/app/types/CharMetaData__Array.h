#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharMetaData__Array {
        inline app::CharMetaData__Array__Class** type_info = (app::CharMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B5B0));
        inline app::CharMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::CharMetaData__Array__Class>(type_info, "CatlikeCoding.TextBox", "CharMetaData[]");
        }
        inline app::CharMetaData__Array* create() {
            return il2cpp::create_object<app::CharMetaData__Array>(get_class());
        }
    } // namespace CharMetaData__Array
} // namespace app::classes::types
