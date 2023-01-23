#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderTargetBlendState__Class.h>
#include <Modloader/app/structs/RenderTargetBlendState.h>
#include <Modloader/app/structs/RenderTargetBlendState__Boxed.h>

namespace app::classes::types {
    namespace RenderTargetBlendState {
        namespace {
            inline app::RenderTargetBlendState__Class* type_info_ref = nullptr;
        }
        inline app::RenderTargetBlendState__Class** type_info = &type_info_ref;
        inline app::RenderTargetBlendState__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetBlendState__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderTargetBlendState");
        }
        inline app::RenderTargetBlendState* create() {
            return il2cpp::create_object<app::RenderTargetBlendState>(get_class());
        }
        inline app::RenderTargetBlendState__Boxed* box(app::RenderTargetBlendState value) {
            return il2cpp::box_value<app::RenderTargetBlendState__Boxed>(get_class(), value);
        }
    } // namespace RenderTargetBlendState
} // namespace app::classes::types
