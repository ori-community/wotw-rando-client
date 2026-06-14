#pragma once
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/Type__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Type__Array {
        inline app::Type__Array__Class** type_info() {
            static app::Type__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Type__Array__Class**)(modloader::win::memory::resolve_rva(0x04767038));
            }
            return cache;
        }
        inline app::Type__Array__Class* get_class() {
            return il2cpp::get_class<app::Type__Array__Class>(type_info(), "System", "Type[]");
        }
        inline app::Type__Array* create() {
            return il2cpp::create_object<app::Type__Array>(get_class());
        }
    } // namespace Type__Array
} // namespace app::classes::types
