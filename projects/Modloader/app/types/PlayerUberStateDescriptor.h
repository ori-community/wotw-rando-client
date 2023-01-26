#pragma once
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateDescriptor {
        inline app::PlayerUberStateDescriptor__Class** type_info() {
            static app::PlayerUberStateDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0473B108));
            }
            return cache;
        }
        inline app::PlayerUberStateDescriptor__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateDescriptor__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateDescriptor");
        }
        inline app::PlayerUberStateDescriptor* create() {
            return il2cpp::create_object<app::PlayerUberStateDescriptor>(get_class());
        }
    } // namespace PlayerUberStateDescriptor
} // namespace app::classes::types
