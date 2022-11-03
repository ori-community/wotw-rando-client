#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterBase {
        namespace {
            inline app::CharacterBase__Class* type_info_ref = nullptr;
        }
        inline app::CharacterBase__Class** type_info = &type_info_ref;
        inline app::CharacterBase__Class* get_class() {
            return il2cpp::get_class<app::CharacterBase__Class>(type_info, "RootMotion.Demos", "CharacterBase");
        }
        inline app::CharacterBase* create() {
            return il2cpp::create_object<app::CharacterBase>(get_class());
        }
    } // namespace CharacterBase
} // namespace app::classes::types
