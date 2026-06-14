#pragma once
#include <Modloader/app/structs/RenderTexture__Array.h>
#include <Modloader/app/structs/RenderTexture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTexture__Array {
        inline app::RenderTexture__Array__Class** type_info() {
            static app::RenderTexture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTexture__Array__Class**)(modloader::win::memory::resolve_rva(0x04767310));
            }
            return cache;
        }
        inline app::RenderTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTexture__Array__Class>(type_info(), "UnityEngine", "RenderTexture[]");
        }
        inline app::RenderTexture__Array* create() {
            return il2cpp::create_object<app::RenderTexture__Array>(get_class());
        }
    } // namespace RenderTexture__Array
} // namespace app::classes::types
