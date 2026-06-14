#pragma once
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/EventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventArgs {
        inline app::EventArgs__Class** type_info() {
            static app::EventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventArgs__Class**)(modloader::win::memory::resolve_rva(0x0478D610));
            }
            return cache;
        }
        inline app::EventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventArgs__Class>(type_info(), "System", "EventArgs");
        }
        inline app::EventArgs* create() {
            return il2cpp::create_object<app::EventArgs>(get_class());
        }
    } // namespace EventArgs
} // namespace app::classes::types
