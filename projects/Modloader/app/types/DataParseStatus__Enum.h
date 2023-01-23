#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataParseStatus__Enum__Class.h>
#include <Modloader/app/structs/DataParseStatus__Enum.h>

namespace app::classes::types {
    namespace DataParseStatus__Enum {
        namespace {
            inline app::DataParseStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DataParseStatus__Enum__Class** type_info = &type_info_ref;
        inline app::DataParseStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataParseStatus__Enum__Class>(type_info, "System.Net", "DataParseStatus");
        }
        inline app::DataParseStatus__Enum* create() {
            return il2cpp::create_object<app::DataParseStatus__Enum>(get_class());
        }
    } // namespace DataParseStatus__Enum
} // namespace app::classes::types
