#pragma once
#include <Modloader/app/structs/ReviewStatus__Enum.h>
#include <Modloader/app/structs/ReviewStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReviewStatus__Enum {
        inline app::ReviewStatus__Enum__Class** type_info() {
            static app::ReviewStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReviewStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReviewStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReviewStatus__Enum__Class>(type_info(), "Moon.ReviewFramework", "ReviewStatus");
        }
        inline app::ReviewStatus__Enum* create() {
            return il2cpp::create_object<app::ReviewStatus__Enum>(get_class());
        }
    } // namespace ReviewStatus__Enum
} // namespace app::classes::types
