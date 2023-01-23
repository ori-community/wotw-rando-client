#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10__Class.h>
#include <Modloader/app/structs/ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10.h>
#include <Modloader/app/structs/ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10__Boxed.h>

namespace app::classes::types {
    namespace ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10 {
        namespace {
            inline app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10__Class* type_info_ref = nullptr;
        }
        inline app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10__Class** type_info = &type_info_ref;
        inline app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10__Class* get_class() {
            return il2cpp::get_nested_class<app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10__Class>(type_info, "UnityEngine.Experimental.Rendering", "ScriptableCullingParameters", "<m_LayerFarCullDistances>__FixedBuffer10");
        }
        inline app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10* create() {
            return il2cpp::create_object<app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10>(get_class());
        }
        inline app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10__Boxed* box(app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10 value) {
            return il2cpp::box_value<app::ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10__Boxed>(get_class(), value);
        }
    } // namespace ScriptableCullingParameters_m_LayerFarCullDistances_FixedBuffer10
} // namespace app::classes::types
