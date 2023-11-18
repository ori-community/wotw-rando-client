#pragma once
#include <Modloader/app/structs/Mesh__Array.h>
#include <Modloader/app/structs/Mesh__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Mesh__Array {
        inline app::Mesh__Array__Class** type_info() {
            static app::Mesh__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Mesh__Array__Class**)(modloader::win::memory::resolve_rva(0x04779838));
            }
            return cache;
        }
        inline app::Mesh__Array__Class* get_class() {
            return il2cpp::get_class<app::Mesh__Array__Class>(type_info(), "UnityEngine", "Mesh[]");
        }
        inline app::Mesh__Array* create() {
            return il2cpp::create_object<app::Mesh__Array>(get_class());
        }
    } // namespace Mesh__Array
} // namespace app::classes::types
