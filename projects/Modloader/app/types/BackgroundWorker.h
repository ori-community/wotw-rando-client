#pragma once
#include <Modloader/app/structs/BackgroundWorker.h>
#include <Modloader/app/structs/BackgroundWorker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BackgroundWorker {
        inline app::BackgroundWorker__Class** type_info() {
            static app::BackgroundWorker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BackgroundWorker__Class**)(modloader::win::memory::resolve_rva(0x04752170));
            }
            return cache;
        }
        inline app::BackgroundWorker__Class* get_class() {
            return il2cpp::get_class<app::BackgroundWorker__Class>(type_info(), "System.ComponentModel", "BackgroundWorker");
        }
        inline app::BackgroundWorker* create() {
            return il2cpp::create_object<app::BackgroundWorker>(get_class());
        }
    } // namespace BackgroundWorker
} // namespace app::classes::types
