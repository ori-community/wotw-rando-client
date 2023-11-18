#pragma once
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAsyncResult {
        inline app::IAsyncResult__Class** type_info() {
            static app::IAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0475CD00));
            }
            return cache;
        }
        inline app::IAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::IAsyncResult__Class>(type_info(), "System", "IAsyncResult");
        }
    } // namespace IAsyncResult
} // namespace app::classes::types
