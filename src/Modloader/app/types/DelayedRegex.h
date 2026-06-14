#pragma once
#include <Modloader/app/structs/DelayedRegex.h>
#include <Modloader/app/structs/DelayedRegex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelayedRegex {
        inline app::DelayedRegex__Class** type_info() {
            static app::DelayedRegex__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelayedRegex__Class**)(modloader::win::memory::resolve_rva(0x04700B40));
            }
            return cache;
        }
        inline app::DelayedRegex__Class* get_class() {
            return il2cpp::get_class<app::DelayedRegex__Class>(type_info(), "System.Net", "DelayedRegex");
        }
        inline app::DelayedRegex* create() {
            return il2cpp::create_object<app::DelayedRegex>(get_class());
        }
    } // namespace DelayedRegex
} // namespace app::classes::types
