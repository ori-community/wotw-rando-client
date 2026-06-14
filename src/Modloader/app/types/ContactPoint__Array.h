#pragma once
#include <Modloader/app/structs/ContactPoint__Array.h>
#include <Modloader/app/structs/ContactPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactPoint__Array {
        inline app::ContactPoint__Array__Class** type_info() {
            static app::ContactPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContactPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04715B40));
            }
            return cache;
        }
        inline app::ContactPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint__Array__Class>(type_info(), "UnityEngine", "ContactPoint[]");
        }
        inline app::ContactPoint__Array* create() {
            return il2cpp::create_object<app::ContactPoint__Array>(get_class());
        }
    } // namespace ContactPoint__Array
} // namespace app::classes::types
