#pragma once
#include <Modloader/app/structs/UberShaderWorldProperty__Array.h>
#include <Modloader/app/structs/UberShaderWorldProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderWorldProperty__Array {
        inline app::UberShaderWorldProperty__Array__Class** type_info() {
            static app::UberShaderWorldProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderWorldProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderWorldProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldProperty__Array__Class>(type_info(), "", "UberShaderWorldProperty[]");
        }
        inline app::UberShaderWorldProperty__Array* create() {
            return il2cpp::create_object<app::UberShaderWorldProperty__Array>(get_class());
        }
    } // namespace UberShaderWorldProperty__Array
} // namespace app::classes::types
