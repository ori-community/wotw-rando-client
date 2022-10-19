#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossSimpleLookAt {
        namespace {
            inline app::KwolokBossSimpleLookAt__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossSimpleLookAt__Class** type_info = &type_info_ref;
        inline app::KwolokBossSimpleLookAt__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossSimpleLookAt__Class>(type_info, "", "KwolokBossSimpleLookAt");
        }
        inline app::KwolokBossSimpleLookAt* create() {
            return il2cpp::create_object<app::KwolokBossSimpleLookAt>(get_class());
        }
    } // namespace KwolokBossSimpleLookAt
} // namespace app::classes::types
