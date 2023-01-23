#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PostLateUpdate_ShaderHandleErrors__Class.h>
#include <Modloader/app/structs/PostLateUpdate_ShaderHandleErrors.h>
#include <Modloader/app/structs/PostLateUpdate_ShaderHandleErrors__Boxed.h>

namespace app::classes::types {
    namespace PostLateUpdate_ShaderHandleErrors {
        namespace {
            inline app::PostLateUpdate_ShaderHandleErrors__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_ShaderHandleErrors__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_ShaderHandleErrors__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ShaderHandleErrors__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ShaderHandleErrors");
        }
        inline app::PostLateUpdate_ShaderHandleErrors* create() {
            return il2cpp::create_object<app::PostLateUpdate_ShaderHandleErrors>(get_class());
        }
        inline app::PostLateUpdate_ShaderHandleErrors__Boxed* box(app::PostLateUpdate_ShaderHandleErrors value) {
            return il2cpp::box_value<app::PostLateUpdate_ShaderHandleErrors__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ShaderHandleErrors
} // namespace app::classes::types
