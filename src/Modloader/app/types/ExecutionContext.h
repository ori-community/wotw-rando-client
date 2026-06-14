#pragma once
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/ExecutionContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecutionContext {
        inline app::ExecutionContext__Class** type_info() {
            static app::ExecutionContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecutionContext__Class**)(modloader::win::memory::resolve_rva(0x0471E090));
            }
            return cache;
        }
        inline app::ExecutionContext__Class* get_class() {
            return il2cpp::get_class<app::ExecutionContext__Class>(type_info(), "System.Threading", "ExecutionContext");
        }
        inline app::ExecutionContext* create() {
            return il2cpp::create_object<app::ExecutionContext>(get_class());
        }
    } // namespace ExecutionContext
} // namespace app::classes::types
