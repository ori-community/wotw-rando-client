#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharactersDynamicProvider__Class.h>
#include <Modloader/app/structs/CharactersDynamicProvider.h>

namespace app::classes::types {
    namespace CharactersDynamicProvider {
        namespace {
            inline app::CharactersDynamicProvider__Class* type_info_ref = nullptr;
        }
        inline app::CharactersDynamicProvider__Class** type_info = &type_info_ref;
        inline app::CharactersDynamicProvider__Class* get_class() {
            return il2cpp::get_class<app::CharactersDynamicProvider__Class>(type_info, "", "CharactersDynamicProvider");
        }
        inline app::CharactersDynamicProvider* create() {
            return il2cpp::create_object<app::CharactersDynamicProvider>(get_class());
        }
    } // namespace CharactersDynamicProvider
} // namespace app::classes::types
