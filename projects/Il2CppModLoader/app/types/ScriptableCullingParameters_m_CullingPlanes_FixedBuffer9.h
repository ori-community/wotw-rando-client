#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9 {
        namespace {
            app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class* type_info_ref = nullptr;
        }
        app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class** type_info = &type_info_ref;
        inline app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class* get_class() {
            return il2cpp::get_nested_class<app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class>(type_info, "UnityEngine.Experimental.Rendering", "ScriptableCullingParameters", "<m_CullingPlanes>__FixedBuffer9");
        }
        inline app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9* create() {
            return il2cpp::create_object<app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9>(get_class());
        }
        inline app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Boxed* box(app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9 value) {
            return il2cpp::box_value<app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Boxed>(get_class(), value);
        }
    } // namespace ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9
} // namespace app::classes::types
