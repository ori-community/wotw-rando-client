#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadSceneMode__Enum {
        namespace {
            inline app::LoadSceneMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LoadSceneMode__Enum__Class** type_info = &type_info_ref;
        inline app::LoadSceneMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LoadSceneMode__Enum__Class>(type_info, "UnityEngine.SceneManagement", "LoadSceneMode");
        }
        inline app::LoadSceneMode__Enum* create() {
            return il2cpp::create_object<app::LoadSceneMode__Enum>(get_class());
        }
    } // namespace LoadSceneMode__Enum
} // namespace app::classes::types
