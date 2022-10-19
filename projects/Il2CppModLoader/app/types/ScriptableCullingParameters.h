#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScriptableCullingParameters {
        namespace {
            inline app::ScriptableCullingParameters__Class* type_info_ref = nullptr;
        }
        inline app::ScriptableCullingParameters__Class** type_info = &type_info_ref;
        inline app::ScriptableCullingParameters__Class* get_class() {
            return il2cpp::get_class<app::ScriptableCullingParameters__Class>(type_info, "UnityEngine.Experimental.Rendering", "ScriptableCullingParameters");
        }
        inline app::ScriptableCullingParameters* create() {
            return il2cpp::create_object<app::ScriptableCullingParameters>(get_class());
        }
        inline app::ScriptableCullingParameters__Boxed* box(app::ScriptableCullingParameters value) {
            return il2cpp::box_value<app::ScriptableCullingParameters__Boxed>(get_class(), value);
        }
    } // namespace ScriptableCullingParameters
} // namespace app::classes::types
