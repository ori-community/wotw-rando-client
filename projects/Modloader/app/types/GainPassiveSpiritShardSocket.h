#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GainPassiveSpiritShardSocket__Class.h>
#include <Modloader/app/structs/GainPassiveSpiritShardSocket.h>

namespace app::classes::types {
    namespace GainPassiveSpiritShardSocket {
        namespace {
            inline app::GainPassiveSpiritShardSocket__Class* type_info_ref = nullptr;
        }
        inline app::GainPassiveSpiritShardSocket__Class** type_info = &type_info_ref;
        inline app::GainPassiveSpiritShardSocket__Class* get_class() {
            return il2cpp::get_class<app::GainPassiveSpiritShardSocket__Class>(type_info, "", "GainPassiveSpiritShardSocket");
        }
        inline app::GainPassiveSpiritShardSocket* create() {
            return il2cpp::create_object<app::GainPassiveSpiritShardSocket>(get_class());
        }
    } // namespace GainPassiveSpiritShardSocket
} // namespace app::classes::types
