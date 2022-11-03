#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformRotator {
        namespace {
            inline app::PlatformRotator__Class* type_info_ref = nullptr;
        }
        inline app::PlatformRotator__Class** type_info = &type_info_ref;
        inline app::PlatformRotator__Class* get_class() {
            return il2cpp::get_class<app::PlatformRotator__Class>(type_info, "RootMotion.Demos", "PlatformRotator");
        }
        inline app::PlatformRotator* create() {
            return il2cpp::create_object<app::PlatformRotator>(get_class());
        }
    } // namespace PlatformRotator
} // namespace app::classes::types
