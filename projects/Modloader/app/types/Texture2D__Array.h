#pragma once
#include <Modloader/app/structs/Texture2D__Array.h>
#include <Modloader/app/structs/Texture2D__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Texture2D__Array {
        inline app::Texture2D__Array__Class** type_info() {
            static app::Texture2D__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Texture2D__Array__Class**)(modloader::win::memory::resolve_rva(0x047402C8));
            }
            return cache;
        }
        inline app::Texture2D__Array__Class* get_class() {
            return il2cpp::get_class<app::Texture2D__Array__Class>(type_info(), "UnityEngine", "Texture2D[]");
        }
        inline app::Texture2D__Array* create() {
            return il2cpp::create_object<app::Texture2D__Array>(get_class());
        }
    } // namespace Texture2D__Array
} // namespace app::classes::types
