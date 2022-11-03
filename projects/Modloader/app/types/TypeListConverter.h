#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeListConverter {
        namespace {
            inline app::TypeListConverter__Class* type_info_ref = nullptr;
        }
        inline app::TypeListConverter__Class** type_info = &type_info_ref;
        inline app::TypeListConverter__Class* get_class() {
            return il2cpp::get_class<app::TypeListConverter__Class>(type_info, "System.ComponentModel", "TypeListConverter");
        }
        inline app::TypeListConverter* create() {
            return il2cpp::create_object<app::TypeListConverter>(get_class());
        }
    } // namespace TypeListConverter
} // namespace app::classes::types
