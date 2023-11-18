#pragma once
#include <Modloader/app/structs/HttpWebResponse.h>
#include <Modloader/app/structs/HttpWebResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpWebResponse {
        inline app::HttpWebResponse__Class** type_info() {
            static app::HttpWebResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpWebResponse__Class**)(modloader::win::memory::resolve_rva(0x047722A8));
            }
            return cache;
        }
        inline app::HttpWebResponse__Class* get_class() {
            return il2cpp::get_class<app::HttpWebResponse__Class>(type_info(), "System.Net", "HttpWebResponse");
        }
        inline app::HttpWebResponse* create() {
            return il2cpp::create_object<app::HttpWebResponse>(get_class());
        }
    } // namespace HttpWebResponse
} // namespace app::classes::types
