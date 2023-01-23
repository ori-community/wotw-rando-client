#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocatedActiveAxis__Class.h>
#include <Modloader/app/structs/LocatedActiveAxis.h>
#include <Modloader/app/structs/LocatedActiveAxis__Array.h>

namespace app::classes::types {
    namespace LocatedActiveAxis {
        inline app::LocatedActiveAxis__Class** type_info = (app::LocatedActiveAxis__Class**)(modloader::win::memory::resolve_rva(0x04714AD0));
        inline app::LocatedActiveAxis__Class* get_class() {
            return il2cpp::get_class<app::LocatedActiveAxis__Class>(type_info, "System.Xml.Schema", "LocatedActiveAxis");
        }
        inline app::LocatedActiveAxis* create() {
            return il2cpp::create_object<app::LocatedActiveAxis>(get_class());
        }
        inline app::LocatedActiveAxis__Array* create_array(int size) {
            return il2cpp::array_new<app::LocatedActiveAxis__Array>(get_class(), size);
        }
        inline app::LocatedActiveAxis__Array* create_array(const std::vector<app::LocatedActiveAxis*>& items) {
            return il2cpp::array_new<app::LocatedActiveAxis__Array>(get_class(), items);
        }
    } // namespace LocatedActiveAxis
} // namespace app::classes::types
