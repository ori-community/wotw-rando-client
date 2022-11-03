#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FogMode__Enum {
        namespace {
            inline app::FogMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FogMode__Enum__Class** type_info = &type_info_ref;
        inline app::FogMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FogMode__Enum__Class>(type_info, "UnityEngine", "FogMode");
        }
        inline app::FogMode__Enum* create() {
            return il2cpp::create_object<app::FogMode__Enum>(get_class());
        }
    } // namespace FogMode__Enum
} // namespace app::classes::types
