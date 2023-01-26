#pragma once
#include <Modloader/app/structs/CFDictionary.h>
#include <Modloader/app/structs/CFDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFDictionary {
        inline app::CFDictionary__Class** type_info() {
            static app::CFDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFDictionary__Class**)(modloader::win::memory::resolve_rva(0x04741D80));
            }
            return cache;
        }
        inline app::CFDictionary__Class* get_class() {
            return il2cpp::get_class<app::CFDictionary__Class>(type_info(), "Mono.Net", "CFDictionary");
        }
        inline app::CFDictionary* create() {
            return il2cpp::create_object<app::CFDictionary>(get_class());
        }
    } // namespace CFDictionary
} // namespace app::classes::types
