#pragma once
#include <Modloader/app/structs/SpecialSetting__Enum.h>
#include <Modloader/app/structs/SpecialSetting__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpecialSetting__Enum {
        inline app::SpecialSetting__Enum__Class** type_info() {
            static app::SpecialSetting__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpecialSetting__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpecialSetting__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpecialSetting__Enum__Class>(type_info(), "System.Configuration", "SpecialSetting");
        }
        inline app::SpecialSetting__Enum* create() {
            return il2cpp::create_object<app::SpecialSetting__Enum>(get_class());
        }
    } // namespace SpecialSetting__Enum
} // namespace app::classes::types
