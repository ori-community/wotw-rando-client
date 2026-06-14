#pragma once
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ArrayList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArrayList {
        inline app::ArrayList__Class** type_info() {
            static app::ArrayList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArrayList__Class**)(modloader::win::memory::resolve_rva(0x0472C508));
            }
            return cache;
        }
        inline app::ArrayList__Class* get_class() {
            return il2cpp::get_class<app::ArrayList__Class>(type_info(), "System.Collections", "ArrayList");
        }
        inline app::ArrayList* create() {
            return il2cpp::create_object<app::ArrayList>(get_class());
        }
    } // namespace ArrayList
} // namespace app::classes::types
