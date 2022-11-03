#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UriHostNameType__Enum {
        namespace {
            inline app::UriHostNameType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UriHostNameType__Enum__Class** type_info = &type_info_ref;
        inline app::UriHostNameType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriHostNameType__Enum__Class>(type_info, "System", "UriHostNameType");
        }
        inline app::UriHostNameType__Enum* create() {
            return il2cpp::create_object<app::UriHostNameType__Enum>(get_class());
        }
    } // namespace UriHostNameType__Enum
} // namespace app::classes::types
