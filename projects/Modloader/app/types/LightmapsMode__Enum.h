#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightmapsMode__Enum__Class.h>
#include <Modloader/app/structs/LightmapsMode__Enum.h>

namespace app::classes::types {
    namespace LightmapsMode__Enum {
        namespace {
            inline app::LightmapsMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LightmapsMode__Enum__Class** type_info = &type_info_ref;
        inline app::LightmapsMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightmapsMode__Enum__Class>(type_info, "UnityEngine", "LightmapsMode");
        }
        inline app::LightmapsMode__Enum* create() {
            return il2cpp::create_object<app::LightmapsMode__Enum>(get_class());
        }
    } // namespace LightmapsMode__Enum
} // namespace app::classes::types
