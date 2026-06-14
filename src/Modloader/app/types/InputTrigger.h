#pragma once
#include <Modloader/app/structs/InputTrigger.h>
#include <Modloader/app/structs/InputTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputTrigger {
        inline app::InputTrigger__Class** type_info() {
            static app::InputTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputTrigger__Class**)(modloader::win::memory::resolve_rva(0x047564E0));
            }
            return cache;
        }
        inline app::InputTrigger__Class* get_class() {
            return il2cpp::get_class<app::InputTrigger__Class>(type_info(), "Moon.UI", "InputTrigger");
        }
        inline app::InputTrigger* create() {
            return il2cpp::create_object<app::InputTrigger>(get_class());
        }
    } // namespace InputTrigger
} // namespace app::classes::types
