#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlatformImplementation__Class.h>
#include <Modloader/app/structs/PlatformImplementation.h>

namespace app::classes::types {
    namespace PlatformImplementation {
        namespace {
            inline app::PlatformImplementation__Class* type_info_ref = nullptr;
        }
        inline app::PlatformImplementation__Class** type_info = &type_info_ref;
        inline app::PlatformImplementation__Class* get_class() {
            return il2cpp::get_class<app::PlatformImplementation__Class>(type_info, "Moon", "PlatformImplementation");
        }
        inline app::PlatformImplementation* create() {
            return il2cpp::create_object<app::PlatformImplementation>(get_class());
        }
    } // namespace PlatformImplementation
} // namespace app::classes::types
