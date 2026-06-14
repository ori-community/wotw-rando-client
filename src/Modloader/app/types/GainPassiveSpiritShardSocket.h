#pragma once
#include <Modloader/app/structs/GainPassiveSpiritShardSocket.h>
#include <Modloader/app/structs/GainPassiveSpiritShardSocket__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GainPassiveSpiritShardSocket {
        inline app::GainPassiveSpiritShardSocket__Class** type_info() {
            static app::GainPassiveSpiritShardSocket__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GainPassiveSpiritShardSocket__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GainPassiveSpiritShardSocket__Class* get_class() {
            return il2cpp::get_class<app::GainPassiveSpiritShardSocket__Class>(type_info(), "", "GainPassiveSpiritShardSocket");
        }
        inline app::GainPassiveSpiritShardSocket* create() {
            return il2cpp::create_object<app::GainPassiveSpiritShardSocket>(get_class());
        }
    } // namespace GainPassiveSpiritShardSocket
} // namespace app::classes::types
