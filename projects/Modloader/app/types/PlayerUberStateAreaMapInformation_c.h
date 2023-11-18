#pragma once
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_c.h>
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation_c {
        inline app::PlayerUberStateAreaMapInformation_c__Class** type_info() {
            static app::PlayerUberStateAreaMapInformation_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateAreaMapInformation_c__Class**)(modloader::win::memory::resolve_rva(0x047952D0));
            }
            return cache;
        }
        inline app::PlayerUberStateAreaMapInformation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAreaMapInformation_c__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation", "<>c");
        }
        inline app::PlayerUberStateAreaMapInformation_c* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation_c>(get_class());
        }
    } // namespace PlayerUberStateAreaMapInformation_c
} // namespace app::classes::types
