#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationWarping_EffectorMode__Enum__Class.h>
#include <Modloader/app/structs/AnimationWarping_EffectorMode__Enum.h>

namespace app::classes::types {
    namespace AnimationWarping_EffectorMode__Enum {
        namespace {
            inline app::AnimationWarping_EffectorMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AnimationWarping_EffectorMode__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationWarping_EffectorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationWarping_EffectorMode__Enum__Class>(type_info, "RootMotion.Demos", "AnimationWarping", "EffectorMode");
        }
        inline app::AnimationWarping_EffectorMode__Enum* create() {
            return il2cpp::create_object<app::AnimationWarping_EffectorMode__Enum>(get_class());
        }
    } // namespace AnimationWarping_EffectorMode__Enum
} // namespace app::classes::types
