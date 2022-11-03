#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokTongueSyncGroup_KwolokTongueGroupEntry {
        namespace {
            inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Class* type_info_ref = nullptr;
        }
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Class** type_info = &type_info_ref;
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Class>(type_info, "", "KwolokTongueSyncGroup", "KwolokTongueGroupEntry");
        }
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry* create() {
            return il2cpp::create_object<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry>(get_class());
        }
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array>(get_class(), size);
        }
        inline app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array* create_array(const std::vector<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry*>& items) {
            return il2cpp::array_new<app::KwolokTongueSyncGroup_KwolokTongueGroupEntry__Array>(get_class(), items);
        }
    } // namespace KwolokTongueSyncGroup_KwolokTongueGroupEntry
} // namespace app::classes::types
