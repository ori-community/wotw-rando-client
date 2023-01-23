#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnumConverter__Class.h>
#include <Modloader/app/structs/EnumConverter.h>

namespace app::classes::types {
    namespace EnumConverter {
        namespace {
            inline app::EnumConverter__Class* type_info_ref = nullptr;
        }
        inline app::EnumConverter__Class** type_info = &type_info_ref;
        inline app::EnumConverter__Class* get_class() {
            return il2cpp::get_class<app::EnumConverter__Class>(type_info, "System.ComponentModel", "EnumConverter");
        }
        inline app::EnumConverter* create() {
            return il2cpp::create_object<app::EnumConverter>(get_class());
        }
    } // namespace EnumConverter
} // namespace app::classes::types
