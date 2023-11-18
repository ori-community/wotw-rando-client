#pragma once
#include <Modloader/app/structs/HttpListenerRequest_GCCDelegate.h>
#include <Modloader/app/structs/HttpListenerRequest_GCCDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequest_GCCDelegate {
        inline app::HttpListenerRequest_GCCDelegate__Class** type_info() {
            static app::HttpListenerRequest_GCCDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpListenerRequest_GCCDelegate__Class**)(modloader::win::memory::resolve_rva(0x04727E80));
            }
            return cache;
        }
        inline app::HttpListenerRequest_GCCDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListenerRequest_GCCDelegate__Class>(type_info(), "System.Net", "HttpListenerRequest", "GCCDelegate");
        }
        inline app::HttpListenerRequest_GCCDelegate* create() {
            return il2cpp::create_object<app::HttpListenerRequest_GCCDelegate>(get_class());
        }
    } // namespace HttpListenerRequest_GCCDelegate
} // namespace app::classes::types
