#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderComponent__Array {
        namespace {
            inline app::UberShaderComponent__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderComponent__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderComponent__Array__Class>(type_info, "", "UberShaderComponent[]");
        }
        inline app::UberShaderComponent__Array* create() {
            return il2cpp::create_object<app::UberShaderComponent__Array>(get_class());
        }
    } // namespace UberShaderComponent__Array
} // namespace app::classes::types
