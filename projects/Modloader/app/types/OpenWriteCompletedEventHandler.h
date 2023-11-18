#pragma once
#include <Modloader/app/structs/OpenWriteCompletedEventHandler.h>
#include <Modloader/app/structs/OpenWriteCompletedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenWriteCompletedEventHandler {
        inline app::OpenWriteCompletedEventHandler__Class** type_info() {
            static app::OpenWriteCompletedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpenWriteCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04712F98));
            }
            return cache;
        }
        inline app::OpenWriteCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::OpenWriteCompletedEventHandler__Class>(type_info(), "System.Net", "OpenWriteCompletedEventHandler");
        }
        inline app::OpenWriteCompletedEventHandler* create() {
            return il2cpp::create_object<app::OpenWriteCompletedEventHandler>(get_class());
        }
    } // namespace OpenWriteCompletedEventHandler
} // namespace app::classes::types
