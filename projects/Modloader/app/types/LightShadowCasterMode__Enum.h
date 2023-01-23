#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightShadowCasterMode__Enum__Class.h>
#include <Modloader/app/structs/LightShadowCasterMode__Enum.h>

namespace app::classes::types {
    namespace LightShadowCasterMode__Enum {
        namespace {
            inline app::LightShadowCasterMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LightShadowCasterMode__Enum__Class** type_info = &type_info_ref;
        inline app::LightShadowCasterMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightShadowCasterMode__Enum__Class>(type_info, "UnityEngine", "LightShadowCasterMode");
        }
        inline app::LightShadowCasterMode__Enum* create() {
            return il2cpp::create_object<app::LightShadowCasterMode__Enum>(get_class());
        }
    } // namespace LightShadowCasterMode__Enum
} // namespace app::classes::types
