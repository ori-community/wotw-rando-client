#pragma once
#include <Modloader/app/structs/UberShaderWrapper__Array.h>
#include <Modloader/app/structs/UberShaderWrapper__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderWrapper__Array {
        inline app::UberShaderWrapper__Array__Class** type_info() {
            static app::UberShaderWrapper__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderWrapper__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWrapper__Array__Class>(type_info(), "Moon.ArtOptimization", "UberShaderWrapper[]");
        }
        inline app::UberShaderWrapper__Array* create() {
            return il2cpp::create_object<app::UberShaderWrapper__Array>(get_class());
        }
    } // namespace UberShaderWrapper__Array
} // namespace app::classes::types
