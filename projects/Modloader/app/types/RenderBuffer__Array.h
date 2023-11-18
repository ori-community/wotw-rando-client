#pragma once
#include <Modloader/app/structs/RenderBuffer__Array.h>
#include <Modloader/app/structs/RenderBuffer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderBuffer__Array {
        inline app::RenderBuffer__Array__Class** type_info() {
            static app::RenderBuffer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderBuffer__Array__Class**)(modloader::win::memory::resolve_rva(0x04729C28));
            }
            return cache;
        }
        inline app::RenderBuffer__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderBuffer__Array__Class>(type_info(), "UnityEngine", "RenderBuffer[]");
        }
        inline app::RenderBuffer__Array* create() {
            return il2cpp::create_object<app::RenderBuffer__Array>(get_class());
        }
    } // namespace RenderBuffer__Array
} // namespace app::classes::types
