#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FPSCharacter__Class.h>
#include <Modloader/app/structs/FPSCharacter.h>

namespace app::classes::types {
    namespace FPSCharacter {
        namespace {
            inline app::FPSCharacter__Class* type_info_ref = nullptr;
        }
        inline app::FPSCharacter__Class** type_info = &type_info_ref;
        inline app::FPSCharacter__Class* get_class() {
            return il2cpp::get_class<app::FPSCharacter__Class>(type_info, "RootMotion.Demos", "FPSCharacter");
        }
        inline app::FPSCharacter* create() {
            return il2cpp::create_object<app::FPSCharacter>(get_class());
        }
    } // namespace FPSCharacter
} // namespace app::classes::types
