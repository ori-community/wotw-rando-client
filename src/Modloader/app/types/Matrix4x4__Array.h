#pragma once
#include <Modloader/app/structs/Matrix4x4__Array.h>
#include <Modloader/app/structs/Matrix4x4__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Matrix4x4__Array {
        inline app::Matrix4x4__Array__Class** type_info() {
            static app::Matrix4x4__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Matrix4x4__Array__Class**)(modloader::win::memory::resolve_rva(0x04761890));
            }
            return cache;
        }
        inline app::Matrix4x4__Array__Class* get_class() {
            return il2cpp::get_class<app::Matrix4x4__Array__Class>(type_info(), "UnityEngine", "Matrix4x4[]");
        }
        inline app::Matrix4x4__Array* create() {
            return il2cpp::create_object<app::Matrix4x4__Array>(get_class());
        }
    } // namespace Matrix4x4__Array
} // namespace app::classes::types
