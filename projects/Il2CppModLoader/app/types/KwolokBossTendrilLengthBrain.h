#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendrilLengthBrain {
        namespace {
            inline app::KwolokBossTendrilLengthBrain__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossTendrilLengthBrain__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendrilLengthBrain__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendrilLengthBrain__Class>(type_info, "", "KwolokBossTendrilLengthBrain");
        }
        inline app::KwolokBossTendrilLengthBrain* create() {
            return il2cpp::create_object<app::KwolokBossTendrilLengthBrain>(get_class());
        }
    } // namespace KwolokBossTendrilLengthBrain
} // namespace app::classes::types
