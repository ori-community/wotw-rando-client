#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TweenConstantSpeedProvider {
        namespace {
            inline app::TweenConstantSpeedProvider__Class* type_info_ref = nullptr;
        }
        inline app::TweenConstantSpeedProvider__Class** type_info = &type_info_ref;
        inline app::TweenConstantSpeedProvider__Class* get_class() {
            return il2cpp::get_class<app::TweenConstantSpeedProvider__Class>(type_info, "Moon", "TweenConstantSpeedProvider");
        }
        inline app::TweenConstantSpeedProvider* create() {
            return il2cpp::create_object<app::TweenConstantSpeedProvider>(get_class());
        }
    } // namespace TweenConstantSpeedProvider
} // namespace app::classes::types
