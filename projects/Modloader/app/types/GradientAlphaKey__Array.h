#pragma once
#include <Modloader/app/structs/GradientAlphaKey__Array.h>
#include <Modloader/app/structs/GradientAlphaKey__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GradientAlphaKey__Array {
        inline app::GradientAlphaKey__Array__Class** type_info() {
            static app::GradientAlphaKey__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GradientAlphaKey__Array__Class**)(modloader::win::memory::resolve_rva(0x047137E8));
            }
            return cache;
        }
        inline app::GradientAlphaKey__Array__Class* get_class() {
            return il2cpp::get_class<app::GradientAlphaKey__Array__Class>(type_info(), "UnityEngine", "GradientAlphaKey[]");
        }
        inline app::GradientAlphaKey__Array* create() {
            return il2cpp::create_object<app::GradientAlphaKey__Array>(get_class());
        }
    } // namespace GradientAlphaKey__Array
} // namespace app::classes::types
