#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendMode__Enum {
        namespace {
            inline app::BlendMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BlendMode__Enum__Class** type_info = &type_info_ref;
        inline app::BlendMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendMode__Enum__Class>(type_info, "UnityEngine.Rendering", "BlendMode");
        }
        inline app::BlendMode__Enum* create() {
            return il2cpp::create_object<app::BlendMode__Enum>(get_class());
        }
    } // namespace BlendMode__Enum
} // namespace app::classes::types
