#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyBabySandWorm_PositionHistoryEntry__Array {
        namespace {
            inline app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class** type_info = &type_info_ref;
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class>(type_info, "", "LegacyBabySandWorm+PositionHistoryEntry[]");
        }
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Array* create() {
            return il2cpp::create_object<app::LegacyBabySandWorm_PositionHistoryEntry__Array>(get_class());
        }
    } // namespace LegacyBabySandWorm_PositionHistoryEntry__Array
} // namespace app::classes::types
