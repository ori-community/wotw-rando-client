#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpWebResponse {
        inline app::HttpWebResponse__Class** type_info = (app::HttpWebResponse__Class**)(modloader::win::memory::resolve_rva(0x047722A8));
        inline app::HttpWebResponse__Class* get_class() {
            return il2cpp::get_class<app::HttpWebResponse__Class>(type_info, "System.Net", "HttpWebResponse");
        }
        inline app::HttpWebResponse* create() {
            return il2cpp::create_object<app::HttpWebResponse>(get_class());
        }
    } // namespace HttpWebResponse
} // namespace app::classes::types
