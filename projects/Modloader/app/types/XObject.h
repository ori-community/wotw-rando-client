#pragma once
#include <Modloader/app/structs/XObject.h>
#include <Modloader/app/structs/XObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XObject {
        inline app::XObject__Class** type_info() {
            static app::XObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XObject__Class**)(modloader::win::memory::resolve_rva(0x0471C1D8));
            }
            return cache;
        }
        inline app::XObject__Class* get_class() {
            return il2cpp::get_class<app::XObject__Class>(type_info(), "System.Xml.Linq", "XObject");
        }
        inline app::XObject* create() {
            return il2cpp::create_object<app::XObject>(get_class());
        }
    } // namespace XObject
} // namespace app::classes::types
