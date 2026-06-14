#pragma once
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_MapTrailEntry__Array.h>
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_MapTrailEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation_MapTrailEntry__Array {
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array__Class** type_info() {
            static app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation+MapTrailEntry[]");
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array>(get_class());
        }
    } // namespace PlayerUberStateAreaMapInformation_MapTrailEntry__Array
} // namespace app::classes::types
