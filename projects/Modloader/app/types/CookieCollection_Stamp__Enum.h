#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CookieCollection_Stamp__Enum__Class.h>
#include <Modloader/app/structs/CookieCollection_Stamp__Enum.h>

namespace app::classes::types {
    namespace CookieCollection_Stamp__Enum {
        namespace {
            inline app::CookieCollection_Stamp__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CookieCollection_Stamp__Enum__Class** type_info = &type_info_ref;
        inline app::CookieCollection_Stamp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieCollection_Stamp__Enum__Class>(type_info, "System.Net", "CookieCollection", "Stamp");
        }
        inline app::CookieCollection_Stamp__Enum* create() {
            return il2cpp::create_object<app::CookieCollection_Stamp__Enum>(get_class());
        }
    } // namespace CookieCollection_Stamp__Enum
} // namespace app::classes::types
