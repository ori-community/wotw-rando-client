#pragma once
#include <Modloader/app/structs/ListDictionaryInternal.h>
#include <Modloader/app/structs/ListDictionaryInternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListDictionaryInternal {
        inline app::ListDictionaryInternal__Class** type_info() {
            static app::ListDictionaryInternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListDictionaryInternal__Class**)(modloader::win::memory::resolve_rva(0x04721D68));
            }
            return cache;
        }
        inline app::ListDictionaryInternal__Class* get_class() {
            return il2cpp::get_class<app::ListDictionaryInternal__Class>(type_info(), "System.Collections", "ListDictionaryInternal");
        }
        inline app::ListDictionaryInternal* create() {
            return il2cpp::create_object<app::ListDictionaryInternal>(get_class());
        }
    } // namespace ListDictionaryInternal
} // namespace app::classes::types
