#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CompoundButtonInput__Class.h>
#include <Modloader/app/structs/CompoundButtonInput.h>

namespace app::classes::types {
    namespace CompoundButtonInput {
        inline app::CompoundButtonInput__Class** type_info = (app::CompoundButtonInput__Class**)(modloader::win::memory::resolve_rva(0x0470CFA8));
        inline app::CompoundButtonInput__Class* get_class() {
            return il2cpp::get_class<app::CompoundButtonInput__Class>(type_info, "SmartInput", "CompoundButtonInput");
        }
        inline app::CompoundButtonInput* create() {
            return il2cpp::create_object<app::CompoundButtonInput>(get_class());
        }
    } // namespace CompoundButtonInput
} // namespace app::classes::types
