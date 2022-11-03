#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPetrifiedFogRemainingDurationValueProvider {
        namespace {
            inline app::SeinPetrifiedFogRemainingDurationValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinPetrifiedFogRemainingDurationValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinPetrifiedFogRemainingDurationValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinPetrifiedFogRemainingDurationValueProvider__Class>(type_info, "", "SeinPetrifiedFogRemainingDurationValueProvider");
        }
        inline app::SeinPetrifiedFogRemainingDurationValueProvider* create() {
            return il2cpp::create_object<app::SeinPetrifiedFogRemainingDurationValueProvider>(get_class());
        }
    } // namespace SeinPetrifiedFogRemainingDurationValueProvider
} // namespace app::classes::types
