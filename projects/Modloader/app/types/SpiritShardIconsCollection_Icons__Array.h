#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Array__Class.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Array.h>

namespace app::classes::types {
    namespace SpiritShardIconsCollection_Icons__Array {
        namespace {
            inline app::SpiritShardIconsCollection_Icons__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardIconsCollection_Icons__Array__Class** type_info = &type_info_ref;
        inline app::SpiritShardIconsCollection_Icons__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIconsCollection_Icons__Array__Class>(type_info, "", "SpiritShardIconsCollection+Icons[]");
        }
        inline app::SpiritShardIconsCollection_Icons__Array* create() {
            return il2cpp::create_object<app::SpiritShardIconsCollection_Icons__Array>(get_class());
        }
    } // namespace SpiritShardIconsCollection_Icons__Array
} // namespace app::classes::types
