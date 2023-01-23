#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SinMovement_Affect__Array__Class.h>
#include <Modloader/app/structs/SinMovement_Affect__Array.h>

namespace app::classes::types {
    namespace SinMovement_Affect__Array {
        namespace {
            inline app::SinMovement_Affect__Array__Class* type_info_ref = nullptr;
        }
        inline app::SinMovement_Affect__Array__Class** type_info = &type_info_ref;
        inline app::SinMovement_Affect__Array__Class* get_class() {
            return il2cpp::get_class<app::SinMovement_Affect__Array__Class>(type_info, "", "SinMovement+Affect[]");
        }
        inline app::SinMovement_Affect__Array* create() {
            return il2cpp::create_object<app::SinMovement_Affect__Array>(get_class());
        }
    } // namespace SinMovement_Affect__Array
} // namespace app::classes::types
