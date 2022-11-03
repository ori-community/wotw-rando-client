#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityData {
        inline app::EntityData__Class** type_info = (app::EntityData__Class**)(modloader::win::memory::resolve_rva(0x04749A58));
        inline app::EntityData__Class* get_class() {
            return il2cpp::get_class<app::EntityData__Class>(type_info, "", "EntityData");
        }
        inline app::EntityData* create() {
            return il2cpp::create_object<app::EntityData>(get_class());
        }
    } // namespace EntityData
} // namespace app::classes::types
