#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array {
        namespace {
            inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class** type_info = &type_info_ref;
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array__Class>(type_info, "", "KwolokTongueSyncGroup+KwolokTongueGroupEntry[]");
        }
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array* create() {
            return il2cpp::create_object<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array>(get_class());
        }
    } // namespace KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array
} // namespace app::classes::types
