#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocatedActiveAxis__Array__Class.h>
#include <Modloader/app/structs/LocatedActiveAxis__Array.h>

namespace app::classes::types {
    namespace LocatedActiveAxis__Array {
        inline app::LocatedActiveAxis__Array__Class** type_info = (app::LocatedActiveAxis__Array__Class**)(modloader::win::memory::resolve_rva(0x04759BA8));
        inline app::LocatedActiveAxis__Array__Class* get_class() {
            return il2cpp::get_class<app::LocatedActiveAxis__Array__Class>(type_info, "System.Xml.Schema", "LocatedActiveAxis[]");
        }
        inline app::LocatedActiveAxis__Array* create() {
            return il2cpp::create_object<app::LocatedActiveAxis__Array>(get_class());
        }
    } // namespace LocatedActiveAxis__Array
} // namespace app::classes::types
