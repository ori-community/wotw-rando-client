#pragma once
#include <Modloader/app/structs/TryCatchFinallyHandler.h>
#include <Modloader/app/structs/TryCatchFinallyHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TryCatchFinallyHandler {
        inline app::TryCatchFinallyHandler__Class** type_info() {
            static app::TryCatchFinallyHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TryCatchFinallyHandler__Class**)(modloader::win::memory::resolve_rva(0x04787A10));
            }
            return cache;
        }
        inline app::TryCatchFinallyHandler__Class* get_class() {
            return il2cpp::get_class<app::TryCatchFinallyHandler__Class>(type_info(), "System.Linq.Expressions.Interpreter", "TryCatchFinallyHandler");
        }
        inline app::TryCatchFinallyHandler* create() {
            return il2cpp::create_object<app::TryCatchFinallyHandler>(get_class());
        }
    } // namespace TryCatchFinallyHandler
} // namespace app::classes::types
