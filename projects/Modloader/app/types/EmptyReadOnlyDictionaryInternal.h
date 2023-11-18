#pragma once
#include <Modloader/app/structs/EmptyReadOnlyDictionaryInternal.h>
#include <Modloader/app/structs/EmptyReadOnlyDictionaryInternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyReadOnlyDictionaryInternal {
        inline app::EmptyReadOnlyDictionaryInternal__Class** type_info() {
            static app::EmptyReadOnlyDictionaryInternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EmptyReadOnlyDictionaryInternal__Class**)(modloader::win::memory::resolve_rva(0x04792508));
            }
            return cache;
        }
        inline app::EmptyReadOnlyDictionaryInternal__Class* get_class() {
            return il2cpp::get_class<app::EmptyReadOnlyDictionaryInternal__Class>(type_info(), "System.Collections", "EmptyReadOnlyDictionaryInternal");
        }
        inline app::EmptyReadOnlyDictionaryInternal* create() {
            return il2cpp::create_object<app::EmptyReadOnlyDictionaryInternal>(get_class());
        }
    } // namespace EmptyReadOnlyDictionaryInternal
} // namespace app::classes::types
