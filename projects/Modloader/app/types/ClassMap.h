#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClassMap__Class.h>
#include <Modloader/app/structs/ClassMap.h>

namespace app::classes::types {
    namespace ClassMap {
        inline app::ClassMap__Class** type_info = (app::ClassMap__Class**)(modloader::win::memory::resolve_rva(0x04704B68));
        inline app::ClassMap__Class* get_class() {
            return il2cpp::get_class<app::ClassMap__Class>(type_info, "System.Xml.Serialization", "ClassMap");
        }
        inline app::ClassMap* create() {
            return il2cpp::create_object<app::ClassMap>(get_class());
        }
    } // namespace ClassMap
} // namespace app::classes::types
