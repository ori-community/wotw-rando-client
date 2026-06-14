#pragma once
#include <Modloader/app/structs/OpenWriteCompletedEventArgs.h>
#include <Modloader/app/structs/OpenWriteCompletedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenWriteCompletedEventArgs {
        inline app::OpenWriteCompletedEventArgs__Class** type_info() {
            static app::OpenWriteCompletedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpenWriteCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04732470));
            }
            return cache;
        }
        inline app::OpenWriteCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::OpenWriteCompletedEventArgs__Class>(type_info(), "System.Net", "OpenWriteCompletedEventArgs");
        }
        inline app::OpenWriteCompletedEventArgs* create() {
            return il2cpp::create_object<app::OpenWriteCompletedEventArgs>(get_class());
        }
    } // namespace OpenWriteCompletedEventArgs
} // namespace app::classes::types
