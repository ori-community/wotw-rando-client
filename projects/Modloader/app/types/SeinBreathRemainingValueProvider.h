#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBreathRemainingValueProvider {
        namespace {
            inline app::SeinBreathRemainingValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinBreathRemainingValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinBreathRemainingValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinBreathRemainingValueProvider__Class>(type_info, "", "SeinBreathRemainingValueProvider");
        }
        inline app::SeinBreathRemainingValueProvider* create() {
            return il2cpp::create_object<app::SeinBreathRemainingValueProvider>(get_class());
        }
    } // namespace SeinBreathRemainingValueProvider
} // namespace app::classes::types
