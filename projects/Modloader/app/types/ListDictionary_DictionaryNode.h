#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListDictionary_DictionaryNode__Class.h>
#include <Modloader/app/structs/ListDictionary_DictionaryNode.h>

namespace app::classes::types {
    namespace ListDictionary_DictionaryNode {
        inline app::ListDictionary_DictionaryNode__Class** type_info = (app::ListDictionary_DictionaryNode__Class**)(modloader::win::memory::resolve_rva(0x0476B8B0));
        inline app::ListDictionary_DictionaryNode__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionary_DictionaryNode__Class>(type_info, "System.Collections.Specialized", "ListDictionary", "DictionaryNode");
        }
        inline app::ListDictionary_DictionaryNode* create() {
            return il2cpp::create_object<app::ListDictionary_DictionaryNode>(get_class());
        }
    } // namespace ListDictionary_DictionaryNode
} // namespace app::classes::types
