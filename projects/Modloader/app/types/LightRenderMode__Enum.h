#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightRenderMode__Enum {
        namespace {
            inline app::LightRenderMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LightRenderMode__Enum__Class** type_info = &type_info_ref;
        inline app::LightRenderMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightRenderMode__Enum__Class>(type_info, "UnityEngine", "LightRenderMode");
        }
        inline app::LightRenderMode__Enum* create() {
            return il2cpp::create_object<app::LightRenderMode__Enum>(get_class());
        }
    } // namespace LightRenderMode__Enum
} // namespace app::classes::types
