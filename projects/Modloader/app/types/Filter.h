#pragma once
#include <Modloader/app/structs/Filter.h>
#include <Modloader/app/structs/Filter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Filter {
        inline app::Filter__Class** type_info() {
            static app::Filter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Filter__Class**)(modloader::win::memory::resolve_rva(0x04751248));
            }
            return cache;
        }
        inline app::Filter__Class* get_class() {
            return il2cpp::get_class<app::Filter__Class>(type_info(), "MS.Internal.Xml.XPath", "Filter");
        }
        inline app::Filter* create() {
            return il2cpp::create_object<app::Filter>(get_class());
        }
    } // namespace Filter
} // namespace app::classes::types
