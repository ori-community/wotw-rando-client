#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShoulderRotator__Class.h>
#include <Modloader/app/structs/ShoulderRotator.h>

namespace app::classes::types {
    namespace ShoulderRotator {
        namespace {
            inline app::ShoulderRotator__Class* type_info_ref = nullptr;
        }
        inline app::ShoulderRotator__Class** type_info = &type_info_ref;
        inline app::ShoulderRotator__Class* get_class() {
            return il2cpp::get_class<app::ShoulderRotator__Class>(type_info, "RootMotion.FinalIK", "ShoulderRotator");
        }
        inline app::ShoulderRotator* create() {
            return il2cpp::create_object<app::ShoulderRotator>(get_class());
        }
    } // namespace ShoulderRotator
} // namespace app::classes::types
