#pragma once
#include <Modloader/app/structs/LateStartHook.h>
#include <Modloader/app/structs/LateStartHook__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LateStartHook {
        inline app::LateStartHook__Class** type_info() {
            static app::LateStartHook__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LateStartHook__Class**)(modloader::win::memory::resolve_rva(0x04762460));
            }
            return cache;
        }
        inline app::LateStartHook__Class* get_class() {
            return il2cpp::get_class<app::LateStartHook__Class>(type_info(), "", "LateStartHook");
        }
        inline app::LateStartHook* create() {
            return il2cpp::create_object<app::LateStartHook>(get_class());
        }
    } // namespace LateStartHook
} // namespace app::classes::types
