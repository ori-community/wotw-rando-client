#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlatformingMovement__Class.h>
#include <Modloader/app/structs/PlatformingMovement.h>

namespace app::classes::types {
    namespace PlatformingMovement {
        namespace {
            inline app::PlatformingMovement__Class* type_info_ref = nullptr;
        }
        inline app::PlatformingMovement__Class** type_info = &type_info_ref;
        inline app::PlatformingMovement__Class* get_class() {
            return il2cpp::get_class<app::PlatformingMovement__Class>(type_info, "", "PlatformingMovement");
        }
        inline app::PlatformingMovement* create() {
            return il2cpp::create_object<app::PlatformingMovement>(get_class());
        }
    } // namespace PlatformingMovement
} // namespace app::classes::types
