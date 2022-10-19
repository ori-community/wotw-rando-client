#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManager_ActorInfo__Array {
        namespace {
            inline app::UberInteractionManager_ActorInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberInteractionManager_ActorInfo__Array__Class** type_info = &type_info_ref;
        inline app::UberInteractionManager_ActorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager_ActorInfo__Array__Class>(type_info, "", "UberInteractionManager+ActorInfo[]");
        }
        inline app::UberInteractionManager_ActorInfo__Array* create() {
            return il2cpp::create_object<app::UberInteractionManager_ActorInfo__Array>(get_class());
        }
    } // namespace UberInteractionManager_ActorInfo__Array
} // namespace app::classes::types
