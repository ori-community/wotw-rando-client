#pragma once
#include <Modloader/app/structs/SeinPetrifiedFogRemainingDurationValueProvider.h>
#include <Modloader/app/structs/SeinPetrifiedFogRemainingDurationValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPetrifiedFogRemainingDurationValueProvider {
        inline app::SeinPetrifiedFogRemainingDurationValueProvider__Class** type_info() {
            static app::SeinPetrifiedFogRemainingDurationValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPetrifiedFogRemainingDurationValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPetrifiedFogRemainingDurationValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinPetrifiedFogRemainingDurationValueProvider__Class>(type_info(), "", "SeinPetrifiedFogRemainingDurationValueProvider");
        }
        inline app::SeinPetrifiedFogRemainingDurationValueProvider* create() {
            return il2cpp::create_object<app::SeinPetrifiedFogRemainingDurationValueProvider>(get_class());
        }
    } // namespace SeinPetrifiedFogRemainingDurationValueProvider
} // namespace app::classes::types
