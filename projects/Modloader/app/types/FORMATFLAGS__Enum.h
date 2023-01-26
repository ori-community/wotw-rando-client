#pragma once
#include <Modloader/app/structs/FORMATFLAGS__Enum.h>
#include <Modloader/app/structs/FORMATFLAGS__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FORMATFLAGS__Enum {
        inline app::FORMATFLAGS__Enum__Class** type_info() {
            static app::FORMATFLAGS__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FORMATFLAGS__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FORMATFLAGS__Enum__Class* get_class() {
            return il2cpp::get_class<app::FORMATFLAGS__Enum__Class>(type_info(), "System.Globalization", "FORMATFLAGS");
        }
        inline app::FORMATFLAGS__Enum* create() {
            return il2cpp::create_object<app::FORMATFLAGS__Enum>(get_class());
        }
    } // namespace FORMATFLAGS__Enum
} // namespace app::classes::types
