#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTarget_State__Enum {
        namespace {
            inline app::RenderTarget_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderTarget_State__Enum__Class** type_info = &type_info_ref;
        inline app::RenderTarget_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RenderTarget_State__Enum__Class>(type_info, "Moon.Rendering", "RenderTarget", "State");
        }
        inline app::RenderTarget_State__Enum* create() {
            return il2cpp::create_object<app::RenderTarget_State__Enum>(get_class());
        }
    } // namespace RenderTarget_State__Enum
} // namespace app::classes::types
