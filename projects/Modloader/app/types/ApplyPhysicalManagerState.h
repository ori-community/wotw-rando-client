#pragma once
#include <Modloader/app/structs/ApplyPhysicalManagerState.h>
#include <Modloader/app/structs/ApplyPhysicalManagerState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplyPhysicalManagerState {
        inline app::ApplyPhysicalManagerState__Class** type_info() {
            static app::ApplyPhysicalManagerState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplyPhysicalManagerState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplyPhysicalManagerState__Class* get_class() {
            return il2cpp::get_class<app::ApplyPhysicalManagerState__Class>(type_info(), "", "ApplyPhysicalManagerState");
        }
        inline app::ApplyPhysicalManagerState* create() {
            return il2cpp::create_object<app::ApplyPhysicalManagerState>(get_class());
        }
    } // namespace ApplyPhysicalManagerState
} // namespace app::classes::types
