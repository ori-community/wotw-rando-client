#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardPrefabs__Class.h>
#include <Modloader/app/structs/SpiritShardPrefabs.h>

namespace app::classes::types {
    namespace SpiritShardPrefabs {
        namespace {
            inline app::SpiritShardPrefabs__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardPrefabs__Class** type_info = &type_info_ref;
        inline app::SpiritShardPrefabs__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPrefabs__Class>(type_info, "", "SpiritShardPrefabs");
        }
        inline app::SpiritShardPrefabs* create() {
            return il2cpp::create_object<app::SpiritShardPrefabs>(get_class());
        }
    } // namespace SpiritShardPrefabs
} // namespace app::classes::types
