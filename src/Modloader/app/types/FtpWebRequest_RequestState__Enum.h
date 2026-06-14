#pragma once
#include <Modloader/app/structs/FtpWebRequest_RequestState__Enum.h>
#include <Modloader/app/structs/FtpWebRequest_RequestState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpWebRequest_RequestState__Enum {
        inline app::FtpWebRequest_RequestState__Enum__Class** type_info() {
            static app::FtpWebRequest_RequestState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FtpWebRequest_RequestState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FtpWebRequest_RequestState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FtpWebRequest_RequestState__Enum__Class>(type_info(), "System.Net", "FtpWebRequest", "RequestState");
        }
        inline app::FtpWebRequest_RequestState__Enum* create() {
            return il2cpp::create_object<app::FtpWebRequest_RequestState__Enum>(get_class());
        }
    } // namespace FtpWebRequest_RequestState__Enum
} // namespace app::classes::types
