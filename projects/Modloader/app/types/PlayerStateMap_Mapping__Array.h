#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerStateMap_Mapping__Array__Class.h>
#include <Modloader/app/structs/PlayerStateMap_Mapping__Array.h>

namespace app::classes::types {
    namespace PlayerStateMap_Mapping__Array {
        namespace {
            inline app::PlayerStateMap_Mapping__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerStateMap_Mapping__Array__Class** type_info = &type_info_ref;
        inline app::PlayerStateMap_Mapping__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerStateMap_Mapping__Array__Class>(type_info, "Moon.uberSerializationWisp", "PlayerStateMap+Mapping[]");
        }
        inline app::PlayerStateMap_Mapping__Array* create() {
            return il2cpp::create_object<app::PlayerStateMap_Mapping__Array>(get_class());
        }
    } // namespace PlayerStateMap_Mapping__Array
} // namespace app::classes::types
