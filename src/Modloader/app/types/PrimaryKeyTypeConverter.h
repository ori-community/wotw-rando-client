#pragma once
#include <Modloader/app/structs/PrimaryKeyTypeConverter.h>
#include <Modloader/app/structs/PrimaryKeyTypeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimaryKeyTypeConverter {
        inline app::PrimaryKeyTypeConverter__Class** type_info() {
            static app::PrimaryKeyTypeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrimaryKeyTypeConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrimaryKeyTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::PrimaryKeyTypeConverter__Class>(type_info(), "System.Data", "PrimaryKeyTypeConverter");
        }
        inline app::PrimaryKeyTypeConverter* create() {
            return il2cpp::create_object<app::PrimaryKeyTypeConverter>(get_class());
        }
    } // namespace PrimaryKeyTypeConverter
} // namespace app::classes::types
