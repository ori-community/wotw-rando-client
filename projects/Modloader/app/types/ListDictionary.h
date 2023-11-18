#pragma once
#include <Modloader/app/structs/ListDictionary.h>
#include <Modloader/app/structs/ListDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListDictionary {
        inline app::ListDictionary__Class** type_info() {
            static app::ListDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListDictionary__Class**)(modloader::win::memory::resolve_rva(0x0477E478));
            }
            return cache;
        }
        inline app::ListDictionary__Class* get_class() {
            return il2cpp::get_class<app::ListDictionary__Class>(type_info(), "System.Collections.Specialized", "ListDictionary");
        }
        inline app::ListDictionary* create() {
            return il2cpp::create_object<app::ListDictionary>(get_class());
        }
    } // namespace ListDictionary
} // namespace app::classes::types
