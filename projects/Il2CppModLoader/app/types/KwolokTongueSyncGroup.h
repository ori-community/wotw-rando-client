#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueSyncGroup {
        namespace {
            app::KwolokTongueSyncGroup__Class* type_info_ref = nullptr;
        }
        app::KwolokTongueSyncGroup__Class** type_info = &type_info_ref;
        inline app::KwolokTongueSyncGroup__Class* get_class() {
            return il2cpp::get_class<app::KwolokTongueSyncGroup__Class>(type_info, "", "KwolokTongueSyncGroup");
        }
        inline app::KwolokTongueSyncGroup* create() {
            return il2cpp::create_object<app::KwolokTongueSyncGroup>(get_class());
        }
    } // namespace KwolokTongueSyncGroup
} // namespace app::classes::types
