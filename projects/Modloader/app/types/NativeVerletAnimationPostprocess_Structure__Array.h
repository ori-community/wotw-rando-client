#pragma once
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_Structure__Array.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_Structure__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess_Structure__Array {
        inline app::NativeVerletAnimationPostprocess_Structure__Array__Class** type_info() {
            static app::NativeVerletAnimationPostprocess_Structure__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NativeVerletAnimationPostprocess_Structure__Array__Class**)(modloader::win::memory::resolve_rva(0x04753B40));
            }
            return cache;
        }
        inline app::NativeVerletAnimationPostprocess_Structure__Array__Class* get_class() {
            return il2cpp::get_class<app::NativeVerletAnimationPostprocess_Structure__Array__Class>(type_info(), "Moon.Animation", "NativeVerletAnimationPostprocess+Structure[]");
        }
        inline app::NativeVerletAnimationPostprocess_Structure__Array* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess_Structure__Array>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess_Structure__Array
} // namespace app::classes::types
