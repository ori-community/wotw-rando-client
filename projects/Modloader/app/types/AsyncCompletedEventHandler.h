#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncCompletedEventHandler__Class.h>
#include <Modloader/app/structs/AsyncCompletedEventHandler.h>

namespace app::classes::types {
    namespace AsyncCompletedEventHandler {
        inline app::AsyncCompletedEventHandler__Class** type_info = (app::AsyncCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0472C520));
        inline app::AsyncCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::AsyncCompletedEventHandler__Class>(type_info, "System.ComponentModel", "AsyncCompletedEventHandler");
        }
        inline app::AsyncCompletedEventHandler* create() {
            return il2cpp::create_object<app::AsyncCompletedEventHandler>(get_class());
        }
    } // namespace AsyncCompletedEventHandler
} // namespace app::classes::types
