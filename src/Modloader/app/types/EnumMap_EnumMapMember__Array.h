#pragma once
#include <Modloader/app/structs/EnumMap_EnumMapMember__Array.h>
#include <Modloader/app/structs/EnumMap_EnumMapMember__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnumMap_EnumMapMember__Array {
        inline app::EnumMap_EnumMapMember__Array__Class** type_info() {
            static app::EnumMap_EnumMapMember__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnumMap_EnumMapMember__Array__Class**)(modloader::win::memory::resolve_rva(0x04798878));
            }
            return cache;
        }
        inline app::EnumMap_EnumMapMember__Array__Class* get_class() {
            return il2cpp::get_class<app::EnumMap_EnumMapMember__Array__Class>(type_info(), "System.Xml.Serialization", "EnumMap+EnumMapMember[]");
        }
        inline app::EnumMap_EnumMapMember__Array* create() {
            return il2cpp::create_object<app::EnumMap_EnumMapMember__Array>(get_class());
        }
    } // namespace EnumMap_EnumMapMember__Array
} // namespace app::classes::types
