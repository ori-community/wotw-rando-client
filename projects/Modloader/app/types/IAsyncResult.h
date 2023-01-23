#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAsyncResult__Class.h>

namespace app::classes::types {
    namespace IAsyncResult {
        inline app::IAsyncResult__Class** type_info = (app::IAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0475CD00));
        inline app::IAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::IAsyncResult__Class>(type_info, "System", "IAsyncResult");
        }
    } // namespace IAsyncResult
} // namespace app::classes::types
