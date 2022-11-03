#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_AsyncCompletionRoutine {
        inline app::XalService_AsyncCompletionRoutine__Class** type_info = (app::XalService_AsyncCompletionRoutine__Class**)(modloader::win::memory::resolve_rva(0x0470D790));
        inline app::XalService_AsyncCompletionRoutine__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncCompletionRoutine__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "AsyncCompletionRoutine");
        }
        inline app::XalService_AsyncCompletionRoutine* create() {
            return il2cpp::create_object<app::XalService_AsyncCompletionRoutine>(get_class());
        }
    } // namespace XalService_AsyncCompletionRoutine
} // namespace app::classes::types
