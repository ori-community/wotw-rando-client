#pragma once
#include <Modloader/app/structs/DataParseStatus__Enum.h>
#include <Modloader/app/structs/DataParseStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataParseStatus__Enum {
        inline app::DataParseStatus__Enum__Class** type_info() {
            static app::DataParseStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataParseStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataParseStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataParseStatus__Enum__Class>(type_info(), "System.Net", "DataParseStatus");
        }
        inline app::DataParseStatus__Enum* create() {
            return il2cpp::create_object<app::DataParseStatus__Enum>(get_class());
        }
    } // namespace DataParseStatus__Enum
} // namespace app::classes::types
