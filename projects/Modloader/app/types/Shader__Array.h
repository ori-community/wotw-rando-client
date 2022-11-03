#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Shader__Array {
        namespace {
            inline app::Shader__Array__Class* type_info_ref = nullptr;
        }
        inline app::Shader__Array__Class** type_info = &type_info_ref;
        inline app::Shader__Array__Class* get_class() {
            return il2cpp::get_class<app::Shader__Array__Class>(type_info, "UnityEngine", "Shader[]");
        }
        inline app::Shader__Array* create() {
            return il2cpp::create_object<app::Shader__Array>(get_class());
        }
    } // namespace Shader__Array
} // namespace app::classes::types
