#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpListenerContext__Array__Class.h>
#include <Modloader/app/structs/HttpListenerContext__Array.h>

namespace app::classes::types {
    namespace HttpListenerContext__Array {
        inline app::HttpListenerContext__Array__Class** type_info = (app::HttpListenerContext__Array__Class**)(modloader::win::memory::resolve_rva(0x04709098));
        inline app::HttpListenerContext__Array__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerContext__Array__Class>(type_info, "System.Net", "HttpListenerContext[]");
        }
        inline app::HttpListenerContext__Array* create() {
            return il2cpp::create_object<app::HttpListenerContext__Array>(get_class());
        }
    } // namespace HttpListenerContext__Array
} // namespace app::classes::types
