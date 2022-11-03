#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpConnection__Array {
        inline app::HttpConnection__Array__Class** type_info = (app::HttpConnection__Array__Class**)(modloader::win::memory::resolve_rva(0x04780C28));
        inline app::HttpConnection__Array__Class* get_class() {
            return il2cpp::get_class<app::HttpConnection__Array__Class>(type_info, "System.Net", "HttpConnection[]");
        }
        inline app::HttpConnection__Array* create() {
            return il2cpp::create_object<app::HttpConnection__Array>(get_class());
        }
    } // namespace HttpConnection__Array
} // namespace app::classes::types
