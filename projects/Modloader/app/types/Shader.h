#pragma once
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Shader__Array.h>
#include <Modloader/app/structs/Shader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Shader {
        inline app::Shader__Class** type_info() {
            static app::Shader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Shader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Shader__Class* get_class() {
            return il2cpp::get_class<app::Shader__Class>(type_info(), "UnityEngine", "Shader");
        }
        inline app::Shader* create() {
            return il2cpp::create_object<app::Shader>(get_class());
        }
        inline app::Shader__Array* create_array(int size) {
            return il2cpp::array_new<app::Shader__Array>(get_class(), size);
        }
        inline app::Shader__Array* create_array(const std::vector<app::Shader*>& items) {
            return il2cpp::array_new<app::Shader__Array>(get_class(), items);
        }
    } // namespace Shader
} // namespace app::classes::types
