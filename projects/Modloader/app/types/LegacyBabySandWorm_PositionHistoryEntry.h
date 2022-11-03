#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyBabySandWorm_PositionHistoryEntry {
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Class** type_info = (app::LegacyBabySandWorm_PositionHistoryEntry__Class**)(modloader::win::memory::resolve_rva(0x0476D970));
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyBabySandWorm_PositionHistoryEntry__Class>(type_info, "", "LegacyBabySandWorm", "PositionHistoryEntry");
        }
        inline app::LegacyBabySandWorm_PositionHistoryEntry* create() {
            return il2cpp::create_object<app::LegacyBabySandWorm_PositionHistoryEntry>(get_class());
        }
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Boxed* box(app::LegacyBabySandWorm_PositionHistoryEntry value) {
            return il2cpp::box_value<app::LegacyBabySandWorm_PositionHistoryEntry__Boxed>(get_class(), value);
        }
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyBabySandWorm_PositionHistoryEntry__Array>(get_class(), size);
        }
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Array* create_array(const std::vector<app::LegacyBabySandWorm_PositionHistoryEntry>& items) {
            return il2cpp::array_new<app::LegacyBabySandWorm_PositionHistoryEntry__Array>(get_class(), items);
        }
    } // namespace LegacyBabySandWorm_PositionHistoryEntry
} // namespace app::classes::types
