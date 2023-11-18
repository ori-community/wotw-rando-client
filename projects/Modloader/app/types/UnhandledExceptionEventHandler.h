#pragma once
#include <Modloader/app/structs/UnhandledExceptionEventHandler.h>
#include <Modloader/app/structs/UnhandledExceptionEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnhandledExceptionEventHandler {
        inline app::UnhandledExceptionEventHandler__Class** type_info() {
            static app::UnhandledExceptionEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnhandledExceptionEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0473D400));
            }
            return cache;
        }
        inline app::UnhandledExceptionEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionEventHandler__Class>(type_info(), "System", "UnhandledExceptionEventHandler");
        }
        inline app::UnhandledExceptionEventHandler* create() {
            return il2cpp::create_object<app::UnhandledExceptionEventHandler>(get_class());
        }
    } // namespace UnhandledExceptionEventHandler
} // namespace app::classes::types
