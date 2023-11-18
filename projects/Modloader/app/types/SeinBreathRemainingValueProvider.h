#pragma once
#include <Modloader/app/structs/SeinBreathRemainingValueProvider.h>
#include <Modloader/app/structs/SeinBreathRemainingValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBreathRemainingValueProvider {
        inline app::SeinBreathRemainingValueProvider__Class** type_info() {
            static app::SeinBreathRemainingValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBreathRemainingValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBreathRemainingValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinBreathRemainingValueProvider__Class>(type_info(), "", "SeinBreathRemainingValueProvider");
        }
        inline app::SeinBreathRemainingValueProvider* create() {
            return il2cpp::create_object<app::SeinBreathRemainingValueProvider>(get_class());
        }
    } // namespace SeinBreathRemainingValueProvider
} // namespace app::classes::types
