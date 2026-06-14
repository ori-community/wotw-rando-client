#pragma once
#include <Modloader/app/structs/KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array.h>
#include <Modloader/app/structs/KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array {
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class** type_info() {
            static app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class>(type_info(), "", "KwolokTongueSyncGroup+KwolokTongueGroupEntry[]");
        }
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array* create() {
            return il2cpp::create_object<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array>(get_class());
        }
    } // namespace KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array
} // namespace app::classes::types
