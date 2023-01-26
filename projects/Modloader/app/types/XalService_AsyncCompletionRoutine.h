#pragma once
#include <Modloader/app/structs/XalService_AsyncCompletionRoutine.h>
#include <Modloader/app/structs/XalService_AsyncCompletionRoutine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_AsyncCompletionRoutine {
        inline app::XalService_AsyncCompletionRoutine__Class** type_info() {
            static app::XalService_AsyncCompletionRoutine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalService_AsyncCompletionRoutine__Class**)(modloader::win::memory::resolve_rva(0x0470D790));
            }
            return cache;
        }
        inline app::XalService_AsyncCompletionRoutine__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncCompletionRoutine__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "AsyncCompletionRoutine");
        }
        inline app::XalService_AsyncCompletionRoutine* create() {
            return il2cpp::create_object<app::XalService_AsyncCompletionRoutine>(get_class());
        }
    } // namespace XalService_AsyncCompletionRoutine
} // namespace app::classes::types
