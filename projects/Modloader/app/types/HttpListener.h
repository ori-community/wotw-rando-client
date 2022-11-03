#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpListener {
        inline app::HttpListener__Class** type_info = (app::HttpListener__Class**)(modloader::win::memory::resolve_rva(0x04776758));
        inline app::HttpListener__Class* get_class() {
            return il2cpp::get_class<app::HttpListener__Class>(type_info, "System.Net", "HttpListener");
        }
        inline app::HttpListener* create() {
            return il2cpp::create_object<app::HttpListener>(get_class());
        }
    } // namespace HttpListener
} // namespace app::classes::types
