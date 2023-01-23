#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DecimalConverter__Class.h>
#include <Modloader/app/structs/DecimalConverter.h>

namespace app::classes::types {
    namespace DecimalConverter {
        namespace {
            inline app::DecimalConverter__Class* type_info_ref = nullptr;
        }
        inline app::DecimalConverter__Class** type_info = &type_info_ref;
        inline app::DecimalConverter__Class* get_class() {
            return il2cpp::get_class<app::DecimalConverter__Class>(type_info, "System.ComponentModel", "DecimalConverter");
        }
        inline app::DecimalConverter* create() {
            return il2cpp::create_object<app::DecimalConverter>(get_class());
        }
    } // namespace DecimalConverter
} // namespace app::classes::types
