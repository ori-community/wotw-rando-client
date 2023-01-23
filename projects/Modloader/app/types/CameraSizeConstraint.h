#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraSizeConstraint__Class.h>
#include <Modloader/app/structs/CameraSizeConstraint.h>

namespace app::classes::types {
    namespace CameraSizeConstraint {
        namespace {
            inline app::CameraSizeConstraint__Class* type_info_ref = nullptr;
        }
        inline app::CameraSizeConstraint__Class** type_info = &type_info_ref;
        inline app::CameraSizeConstraint__Class* get_class() {
            return il2cpp::get_class<app::CameraSizeConstraint__Class>(type_info, "", "CameraSizeConstraint");
        }
        inline app::CameraSizeConstraint* create() {
            return il2cpp::create_object<app::CameraSizeConstraint>(get_class());
        }
    } // namespace CameraSizeConstraint
} // namespace app::classes::types
