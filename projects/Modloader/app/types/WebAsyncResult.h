#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebAsyncResult__Class.h>
#include <Modloader/app/structs/WebAsyncResult.h>

namespace app::classes::types {
    namespace WebAsyncResult {
        inline app::WebAsyncResult__Class** type_info = (app::WebAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476ED78));
        inline app::WebAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::WebAsyncResult__Class>(type_info, "System.Net", "WebAsyncResult");
        }
        inline app::WebAsyncResult* create() {
            return il2cpp::create_object<app::WebAsyncResult>(get_class());
        }
    } // namespace WebAsyncResult
} // namespace app::classes::types
