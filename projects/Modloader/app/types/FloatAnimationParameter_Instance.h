#pragma once
#include <Modloader/app/structs/FloatAnimationParameter_Instance.h>
#include <Modloader/app/structs/FloatAnimationParameter_Instance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatAnimationParameter_Instance {
        inline app::FloatAnimationParameter_Instance__Class** type_info() {
            static app::FloatAnimationParameter_Instance__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FloatAnimationParameter_Instance__Class**)(modloader::win::memory::resolve_rva(0x0475DB58));
            }
            return cache;
        }
        inline app::FloatAnimationParameter_Instance__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatAnimationParameter_Instance__Class>(type_info(), "Moon", "FloatAnimationParameter", "Instance");
        }
        inline app::FloatAnimationParameter_Instance* create() {
            return il2cpp::create_object<app::FloatAnimationParameter_Instance>(get_class());
        }
    } // namespace FloatAnimationParameter_Instance
} // namespace app::classes::types
