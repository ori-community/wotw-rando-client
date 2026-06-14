#pragma once
#include <Modloader/app/structs/Base64Stream_WriteAsyncResult.h>
#include <Modloader/app/structs/Base64Stream_WriteAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Base64Stream_WriteAsyncResult {
        inline app::Base64Stream_WriteAsyncResult__Class** type_info() {
            static app::Base64Stream_WriteAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Base64Stream_WriteAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476FEA8));
            }
            return cache;
        }
        inline app::Base64Stream_WriteAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Base64Stream_WriteAsyncResult__Class>(type_info(), "System.Net", "Base64Stream", "WriteAsyncResult");
        }
        inline app::Base64Stream_WriteAsyncResult* create() {
            return il2cpp::create_object<app::Base64Stream_WriteAsyncResult>(get_class());
        }
    } // namespace Base64Stream_WriteAsyncResult
} // namespace app::classes::types
