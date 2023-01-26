#pragma once
#include <Modloader/app/structs/CaseSensitiveStringDictionary.h>
#include <Modloader/app/structs/CaseSensitiveStringDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaseSensitiveStringDictionary {
        inline app::CaseSensitiveStringDictionary__Class** type_info() {
            static app::CaseSensitiveStringDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CaseSensitiveStringDictionary__Class**)(modloader::win::memory::resolve_rva(0x04753EB0));
            }
            return cache;
        }
        inline app::CaseSensitiveStringDictionary__Class* get_class() {
            return il2cpp::get_class<app::CaseSensitiveStringDictionary__Class>(type_info(), "System.Collections.Specialized", "CaseSensitiveStringDictionary");
        }
        inline app::CaseSensitiveStringDictionary* create() {
            return il2cpp::create_object<app::CaseSensitiveStringDictionary>(get_class());
        }
    } // namespace CaseSensitiveStringDictionary
} // namespace app::classes::types
