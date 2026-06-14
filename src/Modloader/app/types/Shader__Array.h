#pragma once
#include <Modloader/app/structs/Shader__Array.h>
#include <Modloader/app/structs/Shader__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Shader__Array {
        inline app::Shader__Array__Class** type_info() {
            static app::Shader__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Shader__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Shader__Array__Class* get_class() {
            return il2cpp::get_class<app::Shader__Array__Class>(type_info(), "UnityEngine", "Shader[]");
        }
        inline app::Shader__Array* create() {
            return il2cpp::create_object<app::Shader__Array>(get_class());
        }
    } // namespace Shader__Array
} // namespace app::classes::types
