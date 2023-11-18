#pragma once
#include <Modloader/app/structs/UberShaderComponent__Array.h>
#include <Modloader/app/structs/UberShaderComponent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderComponent__Array {
        inline app::UberShaderComponent__Array__Class** type_info() {
            static app::UberShaderComponent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderComponent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderComponent__Array__Class>(type_info(), "", "UberShaderComponent[]");
        }
        inline app::UberShaderComponent__Array* create() {
            return il2cpp::create_object<app::UberShaderComponent__Array>(get_class());
        }
    } // namespace UberShaderComponent__Array
} // namespace app::classes::types
