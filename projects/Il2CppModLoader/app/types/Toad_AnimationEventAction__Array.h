#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Toad_AnimationEventAction__Array {
        namespace {
            inline app::Toad_AnimationEventAction__Array__Class* type_info_ref = nullptr;
        }
        inline app::Toad_AnimationEventAction__Array__Class** type_info = &type_info_ref;
        inline app::Toad_AnimationEventAction__Array__Class* get_class() {
            return il2cpp::get_class<app::Toad_AnimationEventAction__Array__Class>(type_info, "", "Toad+AnimationEventAction[]");
        }
        inline app::Toad_AnimationEventAction__Array* create() {
            return il2cpp::create_object<app::Toad_AnimationEventAction__Array>(get_class());
        }
    } // namespace Toad_AnimationEventAction__Array
} // namespace app::classes::types
