#pragma once
#include <Modloader/app/structs/KwolokTongueSyncGroup.h>
#include <Modloader/app/structs/KwolokTongueSyncGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueSyncGroup {
        inline app::KwolokTongueSyncGroup__Class** type_info() {
            static app::KwolokTongueSyncGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokTongueSyncGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokTongueSyncGroup__Class* get_class() {
            return il2cpp::get_class<app::KwolokTongueSyncGroup__Class>(type_info(), "", "KwolokTongueSyncGroup");
        }
        inline app::KwolokTongueSyncGroup* create() {
            return il2cpp::create_object<app::KwolokTongueSyncGroup>(get_class());
        }
    } // namespace KwolokTongueSyncGroup
} // namespace app::classes::types
