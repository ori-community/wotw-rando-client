#pragma once
#include <Modloader/app/structs/MessageDictionary_DictionaryEnumerator.h>
#include <Modloader/app/structs/MessageDictionary_DictionaryEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageDictionary_DictionaryEnumerator {
        inline app::MessageDictionary_DictionaryEnumerator__Class** type_info() {
            static app::MessageDictionary_DictionaryEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MessageDictionary_DictionaryEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04794A70));
            }
            return cache;
        }
        inline app::MessageDictionary_DictionaryEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageDictionary_DictionaryEnumerator__Class>(type_info(), "System.Runtime.Remoting.Messaging", "MessageDictionary", "DictionaryEnumerator");
        }
        inline app::MessageDictionary_DictionaryEnumerator* create() {
            return il2cpp::create_object<app::MessageDictionary_DictionaryEnumerator>(get_class());
        }
    } // namespace MessageDictionary_DictionaryEnumerator
} // namespace app::classes::types
