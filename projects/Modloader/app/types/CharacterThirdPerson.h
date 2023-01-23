#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterThirdPerson__Class.h>
#include <Modloader/app/structs/CharacterThirdPerson.h>

namespace app::classes::types {
    namespace CharacterThirdPerson {
        namespace {
            inline app::CharacterThirdPerson__Class* type_info_ref = nullptr;
        }
        inline app::CharacterThirdPerson__Class** type_info = &type_info_ref;
        inline app::CharacterThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::CharacterThirdPerson__Class>(type_info, "RootMotion.Demos", "CharacterThirdPerson");
        }
        inline app::CharacterThirdPerson* create() {
            return il2cpp::create_object<app::CharacterThirdPerson>(get_class());
        }
    } // namespace CharacterThirdPerson
} // namespace app::classes::types
