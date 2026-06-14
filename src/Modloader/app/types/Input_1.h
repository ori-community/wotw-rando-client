#pragma once
#include <Modloader/app/structs/Input_1.h>
#include <Modloader/app/structs/Input_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Input_1 {
        inline app::Input_1__Class** type_info() {
            static app::Input_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Input_1__Class**)(modloader::win::memory::resolve_rva(0x0474D8E0));
            }
            return cache;
        }
        inline app::Input_1__Class* get_class() {
            return il2cpp::get_class<app::Input_1__Class>(type_info(), "Core", "Input");
        }
        inline app::Input_1* create() {
            return il2cpp::create_object<app::Input_1>(get_class());
        }
    } // namespace Input_1
} // namespace app::classes::types
