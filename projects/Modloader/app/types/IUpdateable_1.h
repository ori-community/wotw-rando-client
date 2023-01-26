#pragma once
#include <Modloader/app/structs/IUpdateable_1.h>
#include <Modloader/app/structs/IUpdateable_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUpdateable_1 {
        inline app::IUpdateable_1__Class** type_info() {
            static app::IUpdateable_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUpdateable_1__Class**)(modloader::win::memory::resolve_rva(0x04728E28));
            }
            return cache;
        }
        inline app::IUpdateable_1__Class* get_class() {
            return il2cpp::get_class<app::IUpdateable_1__Class>(type_info(), "Moon.FSM", "IUpdateable");
        }
    } // namespace IUpdateable_1
} // namespace app::classes::types
