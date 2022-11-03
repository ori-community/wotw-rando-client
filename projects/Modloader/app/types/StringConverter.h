#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringConverter {
        namespace {
            inline app::StringConverter__Class* type_info_ref = nullptr;
        }
        inline app::StringConverter__Class** type_info = &type_info_ref;
        inline app::StringConverter__Class* get_class() {
            return il2cpp::get_class<app::StringConverter__Class>(type_info, "System.ComponentModel", "StringConverter");
        }
        inline app::StringConverter* create() {
            return il2cpp::create_object<app::StringConverter>(get_class());
        }
    } // namespace StringConverter
} // namespace app::classes::types
