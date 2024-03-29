#pragma once
#include <Modloader/app/structs/NativeVerletAnimationPostprocess.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess {
        inline app::NativeVerletAnimationPostprocess__Class** type_info() {
            static app::NativeVerletAnimationPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NativeVerletAnimationPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04795710));
            }
            return cache;
        }
        inline app::NativeVerletAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::NativeVerletAnimationPostprocess__Class>(type_info(), "Moon.Animation", "NativeVerletAnimationPostprocess");
        }
        inline app::NativeVerletAnimationPostprocess* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess
} // namespace app::classes::types
