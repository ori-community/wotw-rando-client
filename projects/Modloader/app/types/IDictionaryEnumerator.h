#pragma once
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionaryEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDictionaryEnumerator {
        inline app::IDictionaryEnumerator__Class** type_info() {
            static app::IDictionaryEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDictionaryEnumerator__Class**)(modloader::win::memory::resolve_rva(0x047737D0));
            }
            return cache;
        }
        inline app::IDictionaryEnumerator__Class* get_class() {
            return il2cpp::get_class<app::IDictionaryEnumerator__Class>(type_info(), "System.Collections", "IDictionaryEnumerator");
        }
    } // namespace IDictionaryEnumerator
} // namespace app::classes::types
