#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardDescriptionCollection__Class.h>
#include <Modloader/app/structs/SpiritShardDescriptionCollection.h>

namespace app::classes::types {
    namespace SpiritShardDescriptionCollection {
        namespace {
            inline app::SpiritShardDescriptionCollection__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardDescriptionCollection__Class** type_info = &type_info_ref;
        inline app::SpiritShardDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardDescriptionCollection__Class>(type_info, "", "SpiritShardDescriptionCollection");
        }
        inline app::SpiritShardDescriptionCollection* create() {
            return il2cpp::create_object<app::SpiritShardDescriptionCollection>(get_class());
        }
    } // namespace SpiritShardDescriptionCollection
} // namespace app::classes::types
