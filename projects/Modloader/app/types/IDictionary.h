#pragma once
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDictionary {
        inline app::IDictionary__Class** type_info() {
            static app::IDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDictionary__Class**)(modloader::win::memory::resolve_rva(0x0476BAD0));
            }
            return cache;
        }
        inline app::IDictionary__Class* get_class() {
            return il2cpp::get_class<app::IDictionary__Class>(type_info(), "System.Collections", "IDictionary");
        }
    } // namespace IDictionary
} // namespace app::classes::types
