#pragma once
#include <Modloader/app/structs/DrivableGroup.h>
#include <Modloader/app/structs/DrivableGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrivableGroup {
        inline app::DrivableGroup__Class** type_info() {
            static app::DrivableGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DrivableGroup__Class**)(modloader::win::memory::resolve_rva(0x04760FD0));
            }
            return cache;
        }
        inline app::DrivableGroup__Class* get_class() {
            return il2cpp::get_class<app::DrivableGroup__Class>(type_info(), "Moon", "DrivableGroup");
        }
        inline app::DrivableGroup* create() {
            return il2cpp::create_object<app::DrivableGroup>(get_class());
        }
    } // namespace DrivableGroup
} // namespace app::classes::types
