#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SelectorActiveAxis__Class.h>
#include <Modloader/app/structs/SelectorActiveAxis.h>

namespace app::classes::types {
    namespace SelectorActiveAxis {
        inline app::SelectorActiveAxis__Class** type_info = (app::SelectorActiveAxis__Class**)(modloader::win::memory::resolve_rva(0x04721E28));
        inline app::SelectorActiveAxis__Class* get_class() {
            return il2cpp::get_class<app::SelectorActiveAxis__Class>(type_info, "System.Xml.Schema", "SelectorActiveAxis");
        }
        inline app::SelectorActiveAxis* create() {
            return il2cpp::create_object<app::SelectorActiveAxis>(get_class());
        }
    } // namespace SelectorActiveAxis
} // namespace app::classes::types
