#pragma once
#include <Modloader/app/structs/LegacyBabySandWorm_PositionHistoryEntry__Array.h>
#include <Modloader/app/structs/LegacyBabySandWorm_PositionHistoryEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyBabySandWorm_PositionHistoryEntry__Array {
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class** type_info() {
            static app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabySandWorm_PositionHistoryEntry__Array__Class>(type_info(), "", "LegacyBabySandWorm+PositionHistoryEntry[]");
        }
        inline app::LegacyBabySandWorm_PositionHistoryEntry__Array* create() {
            return il2cpp::create_object<app::LegacyBabySandWorm_PositionHistoryEntry__Array>(get_class());
        }
    } // namespace LegacyBabySandWorm_PositionHistoryEntry__Array
} // namespace app::classes::types
