#pragma once
#include <Modloader/app/structs/EntityData.h>
#include <Modloader/app/structs/EntityData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityData {
        inline app::EntityData__Class** type_info() {
            static app::EntityData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityData__Class**)(modloader::win::memory::resolve_rva(0x04749A58));
            }
            return cache;
        }
        inline app::EntityData__Class* get_class() {
            return il2cpp::get_class<app::EntityData__Class>(type_info(), "", "EntityData");
        }
        inline app::EntityData* create() {
            return il2cpp::create_object<app::EntityData>(get_class());
        }
    } // namespace EntityData
} // namespace app::classes::types
