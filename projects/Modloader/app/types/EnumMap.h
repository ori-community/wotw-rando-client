#pragma once
#include <Modloader/app/structs/EnumMap.h>
#include <Modloader/app/structs/EnumMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnumMap {
        inline app::EnumMap__Class** type_info() {
            static app::EnumMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnumMap__Class**)(modloader::win::memory::resolve_rva(0x0476E398));
            }
            return cache;
        }
        inline app::EnumMap__Class* get_class() {
            return il2cpp::get_class<app::EnumMap__Class>(type_info(), "System.Xml.Serialization", "EnumMap");
        }
        inline app::EnumMap* create() {
            return il2cpp::create_object<app::EnumMap>(get_class());
        }
    } // namespace EnumMap
} // namespace app::classes::types
