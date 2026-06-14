#pragma once
#include <Modloader/app/structs/XElement__Array.h>
#include <Modloader/app/structs/XElement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElement__Array {
        inline app::XElement__Array__Class** type_info() {
            static app::XElement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElement__Array__Class**)(modloader::win::memory::resolve_rva(0x047880A8));
            }
            return cache;
        }
        inline app::XElement__Array__Class* get_class() {
            return il2cpp::get_class<app::XElement__Array__Class>(type_info(), "System.Xml.Linq", "XElement[]");
        }
        inline app::XElement__Array* create() {
            return il2cpp::create_object<app::XElement__Array>(get_class());
        }
    } // namespace XElement__Array
} // namespace app::classes::types
