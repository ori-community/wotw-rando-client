#pragma once
#include <Modloader/app/structs/UnhandledExceptionHandler.h>
#include <Modloader/app/structs/UnhandledExceptionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnhandledExceptionHandler {
        inline app::UnhandledExceptionHandler__Class** type_info() {
            static app::UnhandledExceptionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnhandledExceptionHandler__Class**)(modloader::win::memory::resolve_rva(0x0470B9B0));
            }
            return cache;
        }
        inline app::UnhandledExceptionHandler__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionHandler__Class>(type_info(), "UnityEngine", "UnhandledExceptionHandler");
        }
        inline app::UnhandledExceptionHandler* create() {
            return il2cpp::create_object<app::UnhandledExceptionHandler>(get_class());
        }
    } // namespace UnhandledExceptionHandler
} // namespace app::classes::types
