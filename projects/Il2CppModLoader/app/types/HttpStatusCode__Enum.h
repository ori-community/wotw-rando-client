#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpStatusCode__Enum {
        inline app::HttpStatusCode__Enum__Class** type_info = (app::HttpStatusCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714280));
        inline app::HttpStatusCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpStatusCode__Enum__Class>(type_info, "System.Net", "HttpStatusCode");
        }
        inline app::HttpStatusCode__Enum* create() {
            return il2cpp::create_object<app::HttpStatusCode__Enum>(get_class());
        }
    } // namespace HttpStatusCode__Enum
} // namespace app::classes::types
