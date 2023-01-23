#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrimaryKeyTypeConverter__Class.h>
#include <Modloader/app/structs/PrimaryKeyTypeConverter.h>

namespace app::classes::types {
    namespace PrimaryKeyTypeConverter {
        namespace {
            inline app::PrimaryKeyTypeConverter__Class* type_info_ref = nullptr;
        }
        inline app::PrimaryKeyTypeConverter__Class** type_info = &type_info_ref;
        inline app::PrimaryKeyTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::PrimaryKeyTypeConverter__Class>(type_info, "System.Data", "PrimaryKeyTypeConverter");
        }
        inline app::PrimaryKeyTypeConverter* create() {
            return il2cpp::create_object<app::PrimaryKeyTypeConverter>(get_class());
        }
    } // namespace PrimaryKeyTypeConverter
} // namespace app::classes::types
