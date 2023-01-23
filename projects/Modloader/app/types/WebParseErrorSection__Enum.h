#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebParseErrorSection__Enum__Class.h>
#include <Modloader/app/structs/WebParseErrorSection__Enum.h>

namespace app::classes::types {
    namespace WebParseErrorSection__Enum {
        namespace {
            inline app::WebParseErrorSection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WebParseErrorSection__Enum__Class** type_info = &type_info_ref;
        inline app::WebParseErrorSection__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebParseErrorSection__Enum__Class>(type_info, "System.Net", "WebParseErrorSection");
        }
        inline app::WebParseErrorSection__Enum* create() {
            return il2cpp::create_object<app::WebParseErrorSection__Enum>(get_class());
        }
    } // namespace WebParseErrorSection__Enum
} // namespace app::classes::types
