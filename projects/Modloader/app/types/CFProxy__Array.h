#pragma once
#include <Modloader/app/structs/CFProxy__Array.h>
#include <Modloader/app/structs/CFProxy__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFProxy__Array {
        inline app::CFProxy__Array__Class** type_info() {
            static app::CFProxy__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFProxy__Array__Class**)(modloader::win::memory::resolve_rva(0x0474FA68));
            }
            return cache;
        }
        inline app::CFProxy__Array__Class* get_class() {
            return il2cpp::get_class<app::CFProxy__Array__Class>(type_info(), "Mono.Net", "CFProxy[]");
        }
        inline app::CFProxy__Array* create() {
            return il2cpp::create_object<app::CFProxy__Array>(get_class());
        }
    } // namespace CFProxy__Array
} // namespace app::classes::types
