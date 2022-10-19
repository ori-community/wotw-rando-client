#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageDictionary_DictionaryEnumerator {
        inline app::MessageDictionary_DictionaryEnumerator__Class** type_info = (app::MessageDictionary_DictionaryEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04794A70));
        inline app::MessageDictionary_DictionaryEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageDictionary_DictionaryEnumerator__Class>(type_info, "System.Runtime.Remoting.Messaging", "MessageDictionary", "DictionaryEnumerator");
        }
        inline app::MessageDictionary_DictionaryEnumerator* create() {
            return il2cpp::create_object<app::MessageDictionary_DictionaryEnumerator>(get_class());
        }
    } // namespace MessageDictionary_DictionaryEnumerator
} // namespace app::classes::types
