#pragma once
#include <Modloader/app/structs/XAsyncCompletionRoutine.h>
#include <Modloader/app/structs/XAsyncCompletionRoutine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XAsyncCompletionRoutine {
        inline app::XAsyncCompletionRoutine__Class** type_info() {
            static app::XAsyncCompletionRoutine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XAsyncCompletionRoutine__Class**)(modloader::win::memory::resolve_rva(0x04755730));
            }
            return cache;
        }
        inline app::XAsyncCompletionRoutine__Class* get_class() {
            return il2cpp::get_class<app::XAsyncCompletionRoutine__Class>(type_info(), "XGamingRuntime.Interop", "XAsyncCompletionRoutine");
        }
        inline app::XAsyncCompletionRoutine* create() {
            return il2cpp::create_object<app::XAsyncCompletionRoutine>(get_class());
        }
    } // namespace XAsyncCompletionRoutine
} // namespace app::classes::types
