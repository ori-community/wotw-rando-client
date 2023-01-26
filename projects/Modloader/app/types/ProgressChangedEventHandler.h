#pragma once
#include <Modloader/app/structs/ProgressChangedEventHandler.h>
#include <Modloader/app/structs/ProgressChangedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProgressChangedEventHandler {
        inline app::ProgressChangedEventHandler__Class** type_info() {
            static app::ProgressChangedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProgressChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04753CD8));
            }
            return cache;
        }
        inline app::ProgressChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ProgressChangedEventHandler__Class>(type_info(), "System.ComponentModel", "ProgressChangedEventHandler");
        }
        inline app::ProgressChangedEventHandler* create() {
            return il2cpp::create_object<app::ProgressChangedEventHandler>(get_class());
        }
    } // namespace ProgressChangedEventHandler
} // namespace app::classes::types
