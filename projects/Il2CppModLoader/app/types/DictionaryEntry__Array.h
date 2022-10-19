#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DictionaryEntry__Array {
        inline app::DictionaryEntry__Array__Class** type_info = (app::DictionaryEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x04774A20));
        inline app::DictionaryEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DictionaryEntry__Array__Class>(type_info, "System.Collections", "DictionaryEntry[]");
        }
        inline app::DictionaryEntry__Array* create() {
            return il2cpp::create_object<app::DictionaryEntry__Array>(get_class());
        }
    } // namespace DictionaryEntry__Array
} // namespace app::classes::types
