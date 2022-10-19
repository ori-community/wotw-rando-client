#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritTreeCutscene {
        namespace {
            inline app::SpiritTreeCutscene__Class* type_info_ref = nullptr;
        }
        inline app::SpiritTreeCutscene__Class** type_info = &type_info_ref;
        inline app::SpiritTreeCutscene__Class* get_class() {
            return il2cpp::get_class<app::SpiritTreeCutscene__Class>(type_info, "", "SpiritTreeCutscene");
        }
        inline app::SpiritTreeCutscene* create() {
            return il2cpp::create_object<app::SpiritTreeCutscene>(get_class());
        }
    } // namespace SpiritTreeCutscene
} // namespace app::classes::types
