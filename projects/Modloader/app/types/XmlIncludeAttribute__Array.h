#pragma once
#include <Modloader/app/structs/XmlIncludeAttribute__Array.h>
#include <Modloader/app/structs/XmlIncludeAttribute__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlIncludeAttribute__Array {
        inline app::XmlIncludeAttribute__Array__Class** type_info() {
            static app::XmlIncludeAttribute__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlIncludeAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x0471CFC0));
            }
            return cache;
        }
        inline app::XmlIncludeAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlIncludeAttribute__Array__Class>(type_info(), "System.Xml.Serialization", "XmlIncludeAttribute[]");
        }
        inline app::XmlIncludeAttribute__Array* create() {
            return il2cpp::create_object<app::XmlIncludeAttribute__Array>(get_class());
        }
    } // namespace XmlIncludeAttribute__Array
} // namespace app::classes::types
