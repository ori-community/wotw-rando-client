#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest_RequestState__Enum.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_MoveRequest_RequestState__Enum {
        inline app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class** type_info() {
            static app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_MoveRequest_RequestState__Enum__Class>(type_info(), "", "KwolokBossLocomotion+MoveRequest", "RequestState");
        }
        inline app::KwolokBossLocomotion_MoveRequest_RequestState__Enum* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_MoveRequest_RequestState__Enum>(get_class());
        }
    } // namespace KwolokBossLocomotion_MoveRequest_RequestState__Enum
} // namespace app::classes::types
