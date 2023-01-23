#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEnvironmentForceController__Class.h>
#include <Modloader/app/structs/SeinEnvironmentForceController.h>

namespace app::classes::types {
    namespace SeinEnvironmentForceController {
        namespace {
            inline app::SeinEnvironmentForceController__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnvironmentForceController__Class** type_info = &type_info_ref;
        inline app::SeinEnvironmentForceController__Class* get_class() {
            return il2cpp::get_class<app::SeinEnvironmentForceController__Class>(type_info, "", "SeinEnvironmentForceController");
        }
        inline app::SeinEnvironmentForceController* create() {
            return il2cpp::create_object<app::SeinEnvironmentForceController>(get_class());
        }
    } // namespace SeinEnvironmentForceController
} // namespace app::classes::types
