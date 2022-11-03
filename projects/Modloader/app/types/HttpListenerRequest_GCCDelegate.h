#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpListenerRequest_GCCDelegate {
        inline app::HttpListenerRequest_GCCDelegate__Class** type_info = (app::HttpListenerRequest_GCCDelegate__Class**)(modloader::win::memory::resolve_rva(0x04727E80));
        inline app::HttpListenerRequest_GCCDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListenerRequest_GCCDelegate__Class>(type_info, "System.Net", "HttpListenerRequest", "GCCDelegate");
        }
        inline app::HttpListenerRequest_GCCDelegate* create() {
            return il2cpp::create_object<app::HttpListenerRequest_GCCDelegate>(get_class());
        }
    } // namespace HttpListenerRequest_GCCDelegate
} // namespace app::classes::types
