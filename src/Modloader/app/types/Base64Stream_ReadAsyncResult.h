#pragma once
#include <Modloader/app/structs/Base64Stream_ReadAsyncResult.h>
#include <Modloader/app/structs/Base64Stream_ReadAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Base64Stream_ReadAsyncResult {
        inline app::Base64Stream_ReadAsyncResult__Class** type_info() {
            static app::Base64Stream_ReadAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Base64Stream_ReadAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04719540));
            }
            return cache;
        }
        inline app::Base64Stream_ReadAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Base64Stream_ReadAsyncResult__Class>(type_info(), "System.Net", "Base64Stream", "ReadAsyncResult");
        }
        inline app::Base64Stream_ReadAsyncResult* create() {
            return il2cpp::create_object<app::Base64Stream_ReadAsyncResult>(get_class());
        }
    } // namespace Base64Stream_ReadAsyncResult
} // namespace app::classes::types
