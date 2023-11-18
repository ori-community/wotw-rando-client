#pragma once
#include <Modloader/app/structs/ScaleBasedOnFloatProvider.h>
#include <Modloader/app/structs/ScaleBasedOnFloatProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleBasedOnFloatProvider {
        inline app::ScaleBasedOnFloatProvider__Class** type_info() {
            static app::ScaleBasedOnFloatProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleBasedOnFloatProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleBasedOnFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::ScaleBasedOnFloatProvider__Class>(type_info(), "", "ScaleBasedOnFloatProvider");
        }
        inline app::ScaleBasedOnFloatProvider* create() {
            return il2cpp::create_object<app::ScaleBasedOnFloatProvider>(get_class());
        }
    } // namespace ScaleBasedOnFloatProvider
} // namespace app::classes::types
