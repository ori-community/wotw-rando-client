#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MixedLightingMode__Enum__Class.h>
#include <Modloader/app/structs/MixedLightingMode__Enum.h>

namespace app::classes::types {
    namespace MixedLightingMode__Enum {
        namespace {
            inline app::MixedLightingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MixedLightingMode__Enum__Class** type_info = &type_info_ref;
        inline app::MixedLightingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::MixedLightingMode__Enum__Class>(type_info, "UnityEngine", "MixedLightingMode");
        }
        inline app::MixedLightingMode__Enum* create() {
            return il2cpp::create_object<app::MixedLightingMode__Enum>(get_class());
        }
    } // namespace MixedLightingMode__Enum
} // namespace app::classes::types
