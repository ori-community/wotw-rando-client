#pragma once
#include <Modloader/app/structs/Switch.h>
#include <Modloader/app/structs/Switch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Switch {
        inline app::Switch__Class** type_info() {
            static app::Switch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Switch__Class**)(modloader::win::memory::resolve_rva(0x047395A0));
            }
            return cache;
        }
        inline app::Switch__Class* get_class() {
            return il2cpp::get_class<app::Switch__Class>(type_info(), "System.Diagnostics", "Switch");
        }
        inline app::Switch* create() {
            return il2cpp::create_object<app::Switch>(get_class());
        }
    } // namespace Switch
} // namespace app::classes::types
