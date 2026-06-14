#pragma once
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/HttpListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListener {
        inline app::HttpListener__Class** type_info() {
            static app::HttpListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpListener__Class**)(modloader::win::memory::resolve_rva(0x04776758));
            }
            return cache;
        }
        inline app::HttpListener__Class* get_class() {
            return il2cpp::get_class<app::HttpListener__Class>(type_info(), "System.Net", "HttpListener");
        }
        inline app::HttpListener* create() {
            return il2cpp::create_object<app::HttpListener>(get_class());
        }
    } // namespace HttpListener
} // namespace app::classes::types
