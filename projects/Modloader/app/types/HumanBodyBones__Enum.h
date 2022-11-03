#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HumanBodyBones__Enum {
        inline app::HumanBodyBones__Enum__Class** type_info = (app::HumanBodyBones__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714E98));
        inline app::HumanBodyBones__Enum__Class* get_class() {
            return il2cpp::get_class<app::HumanBodyBones__Enum__Class>(type_info, "UnityEngine", "HumanBodyBones");
        }
        inline app::HumanBodyBones__Enum* create() {
            return il2cpp::create_object<app::HumanBodyBones__Enum>(get_class());
        }
    } // namespace HumanBodyBones__Enum
} // namespace app::classes::types
