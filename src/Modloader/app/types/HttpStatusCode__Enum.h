#pragma once
#include <Modloader/app/structs/HttpStatusCode__Enum.h>
#include <Modloader/app/structs/HttpStatusCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpStatusCode__Enum {
        inline app::HttpStatusCode__Enum__Class** type_info() {
            static app::HttpStatusCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpStatusCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714280));
            }
            return cache;
        }
        inline app::HttpStatusCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpStatusCode__Enum__Class>(type_info(), "System.Net", "HttpStatusCode");
        }
        inline app::HttpStatusCode__Enum* create() {
            return il2cpp::create_object<app::HttpStatusCode__Enum>(get_class());
        }
    } // namespace HttpStatusCode__Enum
} // namespace app::classes::types
