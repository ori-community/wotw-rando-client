#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArrayList_ArrayListEnumeratorSimple {
        inline app::ArrayList_ArrayListEnumeratorSimple__Class** type_info = (app::ArrayList_ArrayListEnumeratorSimple__Class**)(modloader::win::memory::resolve_rva(0x04720340));
        inline app::ArrayList_ArrayListEnumeratorSimple__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_ArrayListEnumeratorSimple__Class>(type_info, "System.Collections", "ArrayList", "ArrayListEnumeratorSimple");
        }
        inline app::ArrayList_ArrayListEnumeratorSimple* create() {
            return il2cpp::create_object<app::ArrayList_ArrayListEnumeratorSimple>(get_class());
        }
    } // namespace ArrayList_ArrayListEnumeratorSimple
} // namespace app::classes::types
