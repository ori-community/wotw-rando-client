#pragma once
#include <Modloader/app/structs/BinaryObjectWithMap.h>
#include <Modloader/app/structs/BinaryObjectWithMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryObjectWithMap {
        inline app::BinaryObjectWithMap__Class** type_info() {
            static app::BinaryObjectWithMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryObjectWithMap__Class**)(modloader::win::memory::resolve_rva(0x0476D540));
            }
            return cache;
        }
        inline app::BinaryObjectWithMap__Class* get_class() {
            return il2cpp::get_class<app::BinaryObjectWithMap__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
        }
        inline app::BinaryObjectWithMap* create() {
            return il2cpp::create_object<app::BinaryObjectWithMap>(get_class());
        }
    } // namespace BinaryObjectWithMap
} // namespace app::classes::types
