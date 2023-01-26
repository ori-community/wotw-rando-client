#pragma once
#include <Modloader/app/structs/TweenConstantSpeedProvider.h>
#include <Modloader/app/structs/TweenConstantSpeedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TweenConstantSpeedProvider {
        inline app::TweenConstantSpeedProvider__Class** type_info() {
            static app::TweenConstantSpeedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TweenConstantSpeedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TweenConstantSpeedProvider__Class* get_class() {
            return il2cpp::get_class<app::TweenConstantSpeedProvider__Class>(type_info(), "Moon", "TweenConstantSpeedProvider");
        }
        inline app::TweenConstantSpeedProvider* create() {
            return il2cpp::create_object<app::TweenConstantSpeedProvider>(get_class());
        }
    } // namespace TweenConstantSpeedProvider
} // namespace app::classes::types
