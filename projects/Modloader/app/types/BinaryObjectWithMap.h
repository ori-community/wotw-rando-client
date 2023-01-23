#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BinaryObjectWithMap__Class.h>
#include <Modloader/app/structs/BinaryObjectWithMap.h>

namespace app::classes::types {
    namespace BinaryObjectWithMap {
        inline app::BinaryObjectWithMap__Class** type_info = (app::BinaryObjectWithMap__Class**)(modloader::win::memory::resolve_rva(0x0476D540));
        inline app::BinaryObjectWithMap__Class* get_class() {
            return il2cpp::get_class<app::BinaryObjectWithMap__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
        }
        inline app::BinaryObjectWithMap* create() {
            return il2cpp::create_object<app::BinaryObjectWithMap>(get_class());
        }
    } // namespace BinaryObjectWithMap
} // namespace app::classes::types
