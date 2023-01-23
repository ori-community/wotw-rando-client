#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderStateMask__Enum__Class.h>
#include <Modloader/app/structs/RenderStateMask__Enum.h>

namespace app::classes::types {
    namespace RenderStateMask__Enum {
        namespace {
            inline app::RenderStateMask__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderStateMask__Enum__Class** type_info = &type_info_ref;
        inline app::RenderStateMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderStateMask__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderStateMask");
        }
        inline app::RenderStateMask__Enum* create() {
            return il2cpp::create_object<app::RenderStateMask__Enum>(get_class());
        }
    } // namespace RenderStateMask__Enum
} // namespace app::classes::types
