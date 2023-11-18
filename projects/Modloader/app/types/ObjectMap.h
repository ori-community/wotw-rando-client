#pragma once
#include <Modloader/app/structs/ObjectMap.h>
#include <Modloader/app/structs/ObjectMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectMap {
        inline app::ObjectMap__Class** type_info() {
            static app::ObjectMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectMap__Class**)(modloader::win::memory::resolve_rva(0x04705968));
            }
            return cache;
        }
        inline app::ObjectMap__Class* get_class() {
            return il2cpp::get_class<app::ObjectMap__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "ObjectMap");
        }
        inline app::ObjectMap* create() {
            return il2cpp::create_object<app::ObjectMap>(get_class());
        }
    } // namespace ObjectMap
} // namespace app::classes::types
