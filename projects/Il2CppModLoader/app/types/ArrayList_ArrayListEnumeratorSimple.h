#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayList_ArrayListEnumeratorSimple {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrayList_ArrayListEnumeratorSimple__Class** type_info;
        inline app::ArrayList_ArrayListEnumeratorSimple__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_ArrayListEnumeratorSimple__Class>(type_info, "System.Collections", "ArrayList", "ArrayListEnumeratorSimple");
        }
        inline app::ArrayList_ArrayListEnumeratorSimple* create() {
            return il2cpp::create_object<app::ArrayList_ArrayListEnumeratorSimple>(get_class());
        }
    } // namespace ArrayList_ArrayListEnumeratorSimple
} // namespace app::classes::types
