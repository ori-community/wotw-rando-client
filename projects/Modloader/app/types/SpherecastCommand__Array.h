#pragma once
#include <Modloader/app/structs/SpherecastCommand__Array.h>
#include <Modloader/app/structs/SpherecastCommand__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpherecastCommand__Array {
        inline app::SpherecastCommand__Array__Class** type_info() {
            static app::SpherecastCommand__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpherecastCommand__Array__Class**)(modloader::win::memory::resolve_rva(0x0472A830));
            }
            return cache;
        }
        inline app::SpherecastCommand__Array__Class* get_class() {
            return il2cpp::get_class<app::SpherecastCommand__Array__Class>(type_info(), "UnityEngine", "SpherecastCommand[]");
        }
        inline app::SpherecastCommand__Array* create() {
            return il2cpp::create_object<app::SpherecastCommand__Array>(get_class());
        }
    } // namespace SpherecastCommand__Array
} // namespace app::classes::types
