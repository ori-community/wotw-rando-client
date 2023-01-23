#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RestartOneLifeMode__Class.h>
#include <Modloader/app/structs/RestartOneLifeMode.h>

namespace app::classes::types {
    namespace RestartOneLifeMode {
        namespace {
            inline app::RestartOneLifeMode__Class* type_info_ref = nullptr;
        }
        inline app::RestartOneLifeMode__Class** type_info = &type_info_ref;
        inline app::RestartOneLifeMode__Class* get_class() {
            return il2cpp::get_class<app::RestartOneLifeMode__Class>(type_info, "", "RestartOneLifeMode");
        }
        inline app::RestartOneLifeMode* create() {
            return il2cpp::create_object<app::RestartOneLifeMode>(get_class());
        }
    } // namespace RestartOneLifeMode
} // namespace app::classes::types
