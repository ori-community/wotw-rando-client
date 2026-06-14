#pragma once
#include <Modloader/app/structs/SelectorActiveAxis.h>
#include <Modloader/app/structs/SelectorActiveAxis__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SelectorActiveAxis {
        inline app::SelectorActiveAxis__Class** type_info() {
            static app::SelectorActiveAxis__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SelectorActiveAxis__Class**)(modloader::win::memory::resolve_rva(0x04721E28));
            }
            return cache;
        }
        inline app::SelectorActiveAxis__Class* get_class() {
            return il2cpp::get_class<app::SelectorActiveAxis__Class>(type_info(), "System.Xml.Schema", "SelectorActiveAxis");
        }
        inline app::SelectorActiveAxis* create() {
            return il2cpp::create_object<app::SelectorActiveAxis>(get_class());
        }
    } // namespace SelectorActiveAxis
} // namespace app::classes::types
