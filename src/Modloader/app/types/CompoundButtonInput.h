#pragma once
#include <Modloader/app/structs/CompoundButtonInput.h>
#include <Modloader/app/structs/CompoundButtonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundButtonInput {
        inline app::CompoundButtonInput__Class** type_info() {
            static app::CompoundButtonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompoundButtonInput__Class**)(modloader::win::memory::resolve_rva(0x0470CFA8));
            }
            return cache;
        }
        inline app::CompoundButtonInput__Class* get_class() {
            return il2cpp::get_class<app::CompoundButtonInput__Class>(type_info(), "SmartInput", "CompoundButtonInput");
        }
        inline app::CompoundButtonInput* create() {
            return il2cpp::create_object<app::CompoundButtonInput>(get_class());
        }
    } // namespace CompoundButtonInput
} // namespace app::classes::types
