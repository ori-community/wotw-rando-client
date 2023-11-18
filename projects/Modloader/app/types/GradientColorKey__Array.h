#pragma once
#include <Modloader/app/structs/GradientColorKey__Array.h>
#include <Modloader/app/structs/GradientColorKey__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GradientColorKey__Array {
        inline app::GradientColorKey__Array__Class** type_info() {
            static app::GradientColorKey__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GradientColorKey__Array__Class**)(modloader::win::memory::resolve_rva(0x047543C0));
            }
            return cache;
        }
        inline app::GradientColorKey__Array__Class* get_class() {
            return il2cpp::get_class<app::GradientColorKey__Array__Class>(type_info(), "UnityEngine", "GradientColorKey[]");
        }
        inline app::GradientColorKey__Array* create() {
            return il2cpp::create_object<app::GradientColorKey__Array>(get_class());
        }
    } // namespace GradientColorKey__Array
} // namespace app::classes::types
