#pragma once
#include <Modloader/app/structs/GameSessionRecord.h>
#include <Modloader/app/structs/GameSessionRecord__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameSessionRecord {
        inline app::GameSessionRecord__Class** type_info() {
            static app::GameSessionRecord__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameSessionRecord__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameSessionRecord__Class* get_class() {
            return il2cpp::get_class<app::GameSessionRecord__Class>(type_info(), "Moon.Telemetry", "GameSessionRecord");
        }
        inline app::GameSessionRecord* create() {
            return il2cpp::create_object<app::GameSessionRecord>(get_class());
        }
    } // namespace GameSessionRecord
} // namespace app::classes::types
