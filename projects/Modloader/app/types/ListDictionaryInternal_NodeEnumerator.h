#pragma once
#include <Modloader/app/structs/ListDictionaryInternal_NodeEnumerator.h>
#include <Modloader/app/structs/ListDictionaryInternal_NodeEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListDictionaryInternal_NodeEnumerator {
        inline app::ListDictionaryInternal_NodeEnumerator__Class** type_info() {
            static app::ListDictionaryInternal_NodeEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListDictionaryInternal_NodeEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0475C018));
            }
            return cache;
        }
        inline app::ListDictionaryInternal_NodeEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ListDictionaryInternal_NodeEnumerator__Class>(type_info(), "System.Collections", "ListDictionaryInternal", "NodeEnumerator");
        }
        inline app::ListDictionaryInternal_NodeEnumerator* create() {
            return il2cpp::create_object<app::ListDictionaryInternal_NodeEnumerator>(get_class());
        }
    } // namespace ListDictionaryInternal_NodeEnumerator
} // namespace app::classes::types
