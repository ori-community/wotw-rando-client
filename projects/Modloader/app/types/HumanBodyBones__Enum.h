#pragma once
#include <Modloader/app/structs/HumanBodyBones__Enum.h>
#include <Modloader/app/structs/HumanBodyBones__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HumanBodyBones__Enum {
        inline app::HumanBodyBones__Enum__Class** type_info() {
            static app::HumanBodyBones__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HumanBodyBones__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714E98));
            }
            return cache;
        }
        inline app::HumanBodyBones__Enum__Class* get_class() {
            return il2cpp::get_class<app::HumanBodyBones__Enum__Class>(type_info(), "UnityEngine", "HumanBodyBones");
        }
        inline app::HumanBodyBones__Enum* create() {
            return il2cpp::create_object<app::HumanBodyBones__Enum>(get_class());
        }
    } // namespace HumanBodyBones__Enum
} // namespace app::classes::types
