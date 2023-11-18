#pragma once
#include <Modloader/app/structs/CompoundAxisInput.h>
#include <Modloader/app/structs/CompoundAxisInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundAxisInput {
        inline app::CompoundAxisInput__Class** type_info() {
            static app::CompoundAxisInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompoundAxisInput__Class**)(modloader::win::memory::resolve_rva(0x047580F0));
            }
            return cache;
        }
        inline app::CompoundAxisInput__Class* get_class() {
            return il2cpp::get_class<app::CompoundAxisInput__Class>(type_info(), "SmartInput", "CompoundAxisInput");
        }
        inline app::CompoundAxisInput* create() {
            return il2cpp::create_object<app::CompoundAxisInput>(get_class());
        }
    } // namespace CompoundAxisInput
} // namespace app::classes::types
