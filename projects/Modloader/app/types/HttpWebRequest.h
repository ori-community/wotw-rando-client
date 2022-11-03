#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpWebRequest {
        inline app::HttpWebRequest__Class** type_info = (app::HttpWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04797D90));
        inline app::HttpWebRequest__Class* get_class() {
            return il2cpp::get_class<app::HttpWebRequest__Class>(type_info, "System.Net", "HttpWebRequest");
        }
        inline app::HttpWebRequest* create() {
            return il2cpp::create_object<app::HttpWebRequest>(get_class());
        }
    } // namespace HttpWebRequest
} // namespace app::classes::types
