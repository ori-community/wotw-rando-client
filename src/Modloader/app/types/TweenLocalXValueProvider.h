#pragma once
#include <Modloader/app/structs/TweenLocalXValueProvider.h>
#include <Modloader/app/structs/TweenLocalXValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TweenLocalXValueProvider {
        inline app::TweenLocalXValueProvider__Class** type_info() {
            static app::TweenLocalXValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TweenLocalXValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TweenLocalXValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TweenLocalXValueProvider__Class>(type_info(), "Moon", "TweenLocalXValueProvider");
        }
        inline app::TweenLocalXValueProvider* create() {
            return il2cpp::create_object<app::TweenLocalXValueProvider>(get_class());
        }
    } // namespace TweenLocalXValueProvider
} // namespace app::classes::types
