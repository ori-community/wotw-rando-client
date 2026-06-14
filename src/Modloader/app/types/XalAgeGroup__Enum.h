#pragma once
#include <Modloader/app/structs/XalAgeGroup__Enum.h>
#include <Modloader/app/structs/XalAgeGroup__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalAgeGroup__Enum {
        inline app::XalAgeGroup__Enum__Class** type_info() {
            static app::XalAgeGroup__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalAgeGroup__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalAgeGroup__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalAgeGroup__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalAgeGroup");
        }
        inline app::XalAgeGroup__Enum* create() {
            return il2cpp::create_object<app::XalAgeGroup__Enum>(get_class());
        }
    } // namespace XalAgeGroup__Enum
} // namespace app::classes::types
