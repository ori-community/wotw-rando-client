#pragma once
#include <Modloader/app/structs/TweenYBasedLerpValueProvider.h>
#include <Modloader/app/structs/TweenYBasedLerpValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TweenYBasedLerpValueProvider {
        inline app::TweenYBasedLerpValueProvider__Class** type_info() {
            static app::TweenYBasedLerpValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TweenYBasedLerpValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TweenYBasedLerpValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TweenYBasedLerpValueProvider__Class>(type_info(), "Moon", "TweenYBasedLerpValueProvider");
        }
        inline app::TweenYBasedLerpValueProvider* create() {
            return il2cpp::create_object<app::TweenYBasedLerpValueProvider>(get_class());
        }
    } // namespace TweenYBasedLerpValueProvider
} // namespace app::classes::types
