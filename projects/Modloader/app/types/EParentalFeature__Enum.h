#pragma once
#include <Modloader/app/structs/EParentalFeature__Enum.h>
#include <Modloader/app/structs/EParentalFeature__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EParentalFeature__Enum {
        inline app::EParentalFeature__Enum__Class** type_info() {
            static app::EParentalFeature__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EParentalFeature__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EParentalFeature__Enum__Class* get_class() {
            return il2cpp::get_class<app::EParentalFeature__Enum__Class>(type_info(), "Steamworks", "EParentalFeature");
        }
        inline app::EParentalFeature__Enum* create() {
            return il2cpp::create_object<app::EParentalFeature__Enum>(get_class());
        }
    } // namespace EParentalFeature__Enum
} // namespace app::classes::types
