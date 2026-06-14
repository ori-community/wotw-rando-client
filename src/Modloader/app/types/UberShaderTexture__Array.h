#pragma once
#include <Modloader/app/structs/UberShaderTexture__Array.h>
#include <Modloader/app/structs/UberShaderTexture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderTexture__Array {
        inline app::UberShaderTexture__Array__Class** type_info() {
            static app::UberShaderTexture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderTexture__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTexture__Array__Class>(type_info(), "", "UberShaderTexture[]");
        }
        inline app::UberShaderTexture__Array* create() {
            return il2cpp::create_object<app::UberShaderTexture__Array>(get_class());
        }
    } // namespace UberShaderTexture__Array
} // namespace app::classes::types
