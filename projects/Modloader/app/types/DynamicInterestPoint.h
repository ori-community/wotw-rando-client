#pragma once
#include <Modloader/app/structs/DynamicInterestPoint.h>
#include <Modloader/app/structs/DynamicInterestPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInterestPoint {
        inline app::DynamicInterestPoint__Class** type_info() {
            static app::DynamicInterestPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInterestPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInterestPoint__Class* get_class() {
            return il2cpp::get_class<app::DynamicInterestPoint__Class>(type_info(), "", "DynamicInterestPoint");
        }
        inline app::DynamicInterestPoint* create() {
            return il2cpp::create_object<app::DynamicInterestPoint>(get_class());
        }
    } // namespace DynamicInterestPoint
} // namespace app::classes::types
