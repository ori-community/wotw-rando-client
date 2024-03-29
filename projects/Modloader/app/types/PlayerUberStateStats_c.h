#pragma once
#include <Modloader/app/structs/PlayerUberStateStats_c.h>
#include <Modloader/app/structs/PlayerUberStateStats_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateStats_c {
        inline app::PlayerUberStateStats_c__Class** type_info() {
            static app::PlayerUberStateStats_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateStats_c__Class**)(modloader::win::memory::resolve_rva(0x047140B8));
            }
            return cache;
        }
        inline app::PlayerUberStateStats_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateStats_c__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateStats", "<>c");
        }
        inline app::PlayerUberStateStats_c* create() {
            return il2cpp::create_object<app::PlayerUberStateStats_c>(get_class());
        }
    } // namespace PlayerUberStateStats_c
} // namespace app::classes::types
