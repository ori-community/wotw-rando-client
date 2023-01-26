#pragma once
#include <Modloader/app/structs/ScriptableCullingParameters.h>
#include <Modloader/app/structs/ScriptableCullingParameters__Boxed.h>
#include <Modloader/app/structs/ScriptableCullingParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptableCullingParameters {
        inline app::ScriptableCullingParameters__Class** type_info() {
            static app::ScriptableCullingParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScriptableCullingParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScriptableCullingParameters__Class* get_class() {
            return il2cpp::get_class<app::ScriptableCullingParameters__Class>(type_info(), "UnityEngine.Experimental.Rendering", "ScriptableCullingParameters");
        }
        inline app::ScriptableCullingParameters* create() {
            return il2cpp::create_object<app::ScriptableCullingParameters>(get_class());
        }
        inline app::ScriptableCullingParameters__Boxed* box(app::ScriptableCullingParameters value) {
            return il2cpp::box_value<app::ScriptableCullingParameters__Boxed>(get_class(), value);
        }
    } // namespace ScriptableCullingParameters
} // namespace app::classes::types
