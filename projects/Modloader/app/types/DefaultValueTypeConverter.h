#pragma once
#include <Modloader/app/structs/DefaultValueTypeConverter.h>
#include <Modloader/app/structs/DefaultValueTypeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultValueTypeConverter {
        inline app::DefaultValueTypeConverter__Class** type_info() {
            static app::DefaultValueTypeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultValueTypeConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultValueTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueTypeConverter__Class>(type_info(), "System.Data", "DefaultValueTypeConverter");
        }
        inline app::DefaultValueTypeConverter* create() {
            return il2cpp::create_object<app::DefaultValueTypeConverter>(get_class());
        }
    } // namespace DefaultValueTypeConverter
} // namespace app::classes::types
