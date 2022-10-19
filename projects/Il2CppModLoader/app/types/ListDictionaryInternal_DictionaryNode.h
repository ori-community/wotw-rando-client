#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListDictionaryInternal_DictionaryNode {
        inline app::ListDictionaryInternal_DictionaryNode__Class** type_info = (app::ListDictionaryInternal_DictionaryNode__Class**)(modloader::win::memory::resolve_rva(0x0473F140));
        inline app::ListDictionaryInternal_DictionaryNode__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionaryInternal_DictionaryNode__Class>(type_info, "System.Collections", "ListDictionaryInternal", "DictionaryNode");
        }
        inline app::ListDictionaryInternal_DictionaryNode* create() {
            return il2cpp::create_object<app::ListDictionaryInternal_DictionaryNode>(get_class());
        }
    } // namespace ListDictionaryInternal_DictionaryNode
} // namespace app::classes::types
