#pragma once
#include <Modloader/app/structs/ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9.h>
#include <Modloader/app/structs/ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Boxed.h>
#include <Modloader/app/structs/ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9 {
        inline app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class** type_info() {
            static app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class* get_class() {
            return il2cpp::get_nested_class<app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Class>(type_info(), "UnityEngine.Experimental.Rendering", "ScriptableCullingParameters", "<m_CullingPlanes>__FixedBuffer9");
        }
        inline app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9* create() {
            return il2cpp::create_object<app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9>(get_class());
        }
        inline app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Boxed* box(app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9 value) {
            return il2cpp::box_value<app::ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9__Boxed>(get_class(), value);
        }
    } // namespace ScriptableCullingParameters_m_CullingPlanes_FixedBuffer9
} // namespace app::classes::types
