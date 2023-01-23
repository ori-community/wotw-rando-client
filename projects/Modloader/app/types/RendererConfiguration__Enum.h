#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RendererConfiguration__Enum__Class.h>
#include <Modloader/app/structs/RendererConfiguration__Enum.h>

namespace app::classes::types {
    namespace RendererConfiguration__Enum {
        namespace {
            inline app::RendererConfiguration__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RendererConfiguration__Enum__Class** type_info = &type_info_ref;
        inline app::RendererConfiguration__Enum__Class* get_class() {
            return il2cpp::get_class<app::RendererConfiguration__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererConfiguration");
        }
        inline app::RendererConfiguration__Enum* create() {
            return il2cpp::create_object<app::RendererConfiguration__Enum>(get_class());
        }
    } // namespace RendererConfiguration__Enum
} // namespace app::classes::types
