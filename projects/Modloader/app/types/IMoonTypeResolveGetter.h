#pragma once
#include <Modloader/app/structs/IMoonTypeResolveGetter.h>
#include <Modloader/app/structs/IMoonTypeResolveGetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonTypeResolveGetter {
        inline app::IMoonTypeResolveGetter__Class** type_info() {
            static app::IMoonTypeResolveGetter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonTypeResolveGetter__Class**)(modloader::win::memory::resolve_rva(0x0478D060));
            }
            return cache;
        }
        inline app::IMoonTypeResolveGetter__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeResolveGetter__Class>(type_info(), "Moon", "IMoonTypeResolveGetter");
        }
    } // namespace IMoonTypeResolveGetter
} // namespace app::classes::types
