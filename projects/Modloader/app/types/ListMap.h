#pragma once
#include <Modloader/app/structs/ListMap.h>
#include <Modloader/app/structs/ListMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMap {
        inline app::ListMap__Class** type_info() {
            static app::ListMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMap__Class**)(modloader::win::memory::resolve_rva(0x047528D8));
            }
            return cache;
        }
        inline app::ListMap__Class* get_class() {
            return il2cpp::get_class<app::ListMap__Class>(type_info(), "System.Xml.Serialization", "ListMap");
        }
        inline app::ListMap* create() {
            return il2cpp::create_object<app::ListMap>(get_class());
        }
    } // namespace ListMap
} // namespace app::classes::types
