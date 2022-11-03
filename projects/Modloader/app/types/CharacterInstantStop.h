#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterInstantStop {
        namespace {
            inline app::CharacterInstantStop__Class* type_info_ref = nullptr;
        }
        inline app::CharacterInstantStop__Class** type_info = &type_info_ref;
        inline app::CharacterInstantStop__Class* get_class() {
            return il2cpp::get_class<app::CharacterInstantStop__Class>(type_info, "", "CharacterInstantStop");
        }
        inline app::CharacterInstantStop* create() {
            return il2cpp::create_object<app::CharacterInstantStop>(get_class());
        }
    } // namespace CharacterInstantStop
} // namespace app::classes::types
