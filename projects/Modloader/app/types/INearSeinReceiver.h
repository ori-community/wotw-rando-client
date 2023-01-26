#pragma once
#include <Modloader/app/structs/INearSeinReceiver.h>
#include <Modloader/app/structs/INearSeinReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INearSeinReceiver {
        inline app::INearSeinReceiver__Class** type_info() {
            static app::INearSeinReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INearSeinReceiver__Class**)(modloader::win::memory::resolve_rva(0x04755320));
            }
            return cache;
        }
        inline app::INearSeinReceiver__Class* get_class() {
            return il2cpp::get_class<app::INearSeinReceiver__Class>(type_info(), "", "INearSeinReceiver");
        }
    } // namespace INearSeinReceiver
} // namespace app::classes::types
