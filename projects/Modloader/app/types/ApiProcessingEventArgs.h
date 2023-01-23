#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ApiProcessingEventArgs__Class.h>
#include <Modloader/app/structs/ApiProcessingEventArgs.h>

namespace app::classes::types {
    namespace ApiProcessingEventArgs {
        inline app::ApiProcessingEventArgs__Class** type_info = (app::ApiProcessingEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0478DE40));
        inline app::ApiProcessingEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ApiProcessingEventArgs__Class>(type_info, "PlayFab.Internal", "ApiProcessingEventArgs");
        }
        inline app::ApiProcessingEventArgs* create() {
            return il2cpp::create_object<app::ApiProcessingEventArgs>(get_class());
        }
    } // namespace ApiProcessingEventArgs
} // namespace app::classes::types
