#pragma once
#include <Modloader/app/structs/HttpConnection__Array.h>
#include <Modloader/app/structs/HttpConnection__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpConnection__Array {
        inline app::HttpConnection__Array__Class** type_info() {
            static app::HttpConnection__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpConnection__Array__Class**)(modloader::win::memory::resolve_rva(0x04780C28));
            }
            return cache;
        }
        inline app::HttpConnection__Array__Class* get_class() {
            return il2cpp::get_class<app::HttpConnection__Array__Class>(type_info(), "System.Net", "HttpConnection[]");
        }
        inline app::HttpConnection__Array* create() {
            return il2cpp::create_object<app::HttpConnection__Array>(get_class());
        }
    } // namespace HttpConnection__Array
} // namespace app::classes::types
