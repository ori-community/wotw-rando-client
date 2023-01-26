#pragma once
#include <Modloader/app/structs/SeinDeadlyDarknessRemainingDurationValueProvider.h>
#include <Modloader/app/structs/SeinDeadlyDarknessRemainingDurationValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDeadlyDarknessRemainingDurationValueProvider {
        inline app::SeinDeadlyDarknessRemainingDurationValueProvider__Class** type_info() {
            static app::SeinDeadlyDarknessRemainingDurationValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinDeadlyDarknessRemainingDurationValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinDeadlyDarknessRemainingDurationValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinDeadlyDarknessRemainingDurationValueProvider__Class>(type_info(), "", "SeinDeadlyDarknessRemainingDurationValueProvider");
        }
        inline app::SeinDeadlyDarknessRemainingDurationValueProvider* create() {
            return il2cpp::create_object<app::SeinDeadlyDarknessRemainingDurationValueProvider>(get_class());
        }
    } // namespace SeinDeadlyDarknessRemainingDurationValueProvider
} // namespace app::classes::types
