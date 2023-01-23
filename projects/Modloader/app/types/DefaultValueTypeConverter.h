#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DefaultValueTypeConverter__Class.h>
#include <Modloader/app/structs/DefaultValueTypeConverter.h>

namespace app::classes::types {
    namespace DefaultValueTypeConverter {
        namespace {
            inline app::DefaultValueTypeConverter__Class* type_info_ref = nullptr;
        }
        inline app::DefaultValueTypeConverter__Class** type_info = &type_info_ref;
        inline app::DefaultValueTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueTypeConverter__Class>(type_info, "System.Data", "DefaultValueTypeConverter");
        }
        inline app::DefaultValueTypeConverter* create() {
            return il2cpp::create_object<app::DefaultValueTypeConverter>(get_class());
        }
    } // namespace DefaultValueTypeConverter
} // namespace app::classes::types
