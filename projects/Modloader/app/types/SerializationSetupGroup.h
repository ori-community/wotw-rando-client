#pragma once
#include <Modloader/app/structs/SerializationSetupGroup.h>
#include <Modloader/app/structs/SerializationSetupGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationSetupGroup {
        inline app::SerializationSetupGroup__Class** type_info() {
            static app::SerializationSetupGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationSetupGroup__Class**)(modloader::win::memory::resolve_rva(0x04771060));
            }
            return cache;
        }
        inline app::SerializationSetupGroup__Class* get_class() {
            return il2cpp::get_class<app::SerializationSetupGroup__Class>(type_info(), "", "SerializationSetupGroup");
        }
        inline app::SerializationSetupGroup* create() {
            return il2cpp::create_object<app::SerializationSetupGroup>(get_class());
        }
    } // namespace SerializationSetupGroup
} // namespace app::classes::types
