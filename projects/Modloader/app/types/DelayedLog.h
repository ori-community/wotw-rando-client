#pragma once
#include <Modloader/app/structs/DelayedLog.h>
#include <Modloader/app/structs/DelayedLog__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelayedLog {
        inline app::DelayedLog__Class** type_info() {
            static app::DelayedLog__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelayedLog__Class**)(modloader::win::memory::resolve_rva(0x0470FB68));
            }
            return cache;
        }
        inline app::DelayedLog__Class* get_class() {
            return il2cpp::get_class<app::DelayedLog__Class>(type_info(), "", "DelayedLog");
        }
        inline app::DelayedLog* create() {
            return il2cpp::create_object<app::DelayedLog>(get_class());
        }
    } // namespace DelayedLog
} // namespace app::classes::types
