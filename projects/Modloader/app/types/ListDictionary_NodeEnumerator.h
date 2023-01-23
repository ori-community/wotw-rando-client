#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListDictionary_NodeEnumerator__Class.h>
#include <Modloader/app/structs/ListDictionary_NodeEnumerator.h>

namespace app::classes::types {
    namespace ListDictionary_NodeEnumerator {
        inline app::ListDictionary_NodeEnumerator__Class** type_info = (app::ListDictionary_NodeEnumerator__Class**)(modloader::win::memory::resolve_rva(0x047801C0));
        inline app::ListDictionary_NodeEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionary_NodeEnumerator__Class>(type_info, "System.Collections.Specialized", "ListDictionary", "NodeEnumerator");
        }
        inline app::ListDictionary_NodeEnumerator* create() {
            return il2cpp::create_object<app::ListDictionary_NodeEnumerator>(get_class());
        }
    } // namespace ListDictionary_NodeEnumerator
} // namespace app::classes::types
