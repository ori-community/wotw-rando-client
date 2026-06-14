#pragma once
#include <Modloader/app/structs/Keyframe__Array.h>
#include <Modloader/app/structs/Keyframe__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Keyframe__Array {
        inline app::Keyframe__Array__Class** type_info() {
            static app::Keyframe__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Keyframe__Array__Class**)(modloader::win::memory::resolve_rva(0x0473C8E8));
            }
            return cache;
        }
        inline app::Keyframe__Array__Class* get_class() {
            return il2cpp::get_class<app::Keyframe__Array__Class>(type_info(), "UnityEngine", "Keyframe[]");
        }
        inline app::Keyframe__Array* create() {
            return il2cpp::create_object<app::Keyframe__Array>(get_class());
        }
    } // namespace Keyframe__Array
} // namespace app::classes::types
