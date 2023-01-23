#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlatformBehaviour__Class.h>
#include <Modloader/app/structs/PlatformBehaviour.h>

namespace app::classes::types {
    namespace PlatformBehaviour {
        namespace {
            inline app::PlatformBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PlatformBehaviour__Class** type_info = &type_info_ref;
        inline app::PlatformBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PlatformBehaviour__Class>(type_info, "", "PlatformBehaviour");
        }
        inline app::PlatformBehaviour* create() {
            return il2cpp::create_object<app::PlatformBehaviour>(get_class());
        }
    } // namespace PlatformBehaviour
} // namespace app::classes::types
