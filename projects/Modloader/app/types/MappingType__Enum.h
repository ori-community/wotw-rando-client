#pragma once
#include <Modloader/app/structs/MappingType__Enum.h>
#include <Modloader/app/structs/MappingType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MappingType__Enum {
        inline app::MappingType__Enum__Class** type_info() {
            static app::MappingType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MappingType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04778520));
            }
            return cache;
        }
        inline app::MappingType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MappingType__Enum__Class>(type_info(), "System.Data", "MappingType");
        }
        inline app::MappingType__Enum* create() {
            return il2cpp::create_object<app::MappingType__Enum>(get_class());
        }
    } // namespace MappingType__Enum
} // namespace app::classes::types
