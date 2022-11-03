#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TweenYBasedLerpValueProvider {
        namespace {
            inline app::TweenYBasedLerpValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::TweenYBasedLerpValueProvider__Class** type_info = &type_info_ref;
        inline app::TweenYBasedLerpValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TweenYBasedLerpValueProvider__Class>(type_info, "Moon", "TweenYBasedLerpValueProvider");
        }
        inline app::TweenYBasedLerpValueProvider* create() {
            return il2cpp::create_object<app::TweenYBasedLerpValueProvider>(get_class());
        }
    } // namespace TweenYBasedLerpValueProvider
} // namespace app::classes::types
