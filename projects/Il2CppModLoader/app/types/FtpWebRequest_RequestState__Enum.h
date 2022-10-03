#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FtpWebRequest_RequestState__Enum {
        namespace {
            app::FtpWebRequest_RequestState__Enum__Class* type_info_ref = nullptr;
        }
        app::FtpWebRequest_RequestState__Enum__Class** type_info = &type_info_ref;
        inline app::FtpWebRequest_RequestState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FtpWebRequest_RequestState__Enum__Class>(type_info, "System.Net", "FtpWebRequest", "RequestState");
        }
        inline app::FtpWebRequest_RequestState__Enum* create() {
            return il2cpp::create_object<app::FtpWebRequest_RequestState__Enum>(get_class());
        }
    } // namespace FtpWebRequest_RequestState__Enum
} // namespace app::classes::types
