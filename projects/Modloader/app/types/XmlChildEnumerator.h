#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlChildEnumerator__Class.h>
#include <Modloader/app/structs/XmlChildEnumerator.h>

namespace app::classes::types {
    namespace XmlChildEnumerator {
        inline app::XmlChildEnumerator__Class** type_info = (app::XmlChildEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04757928));
        inline app::XmlChildEnumerator__Class* get_class() {
            return il2cpp::get_class<app::XmlChildEnumerator__Class>(type_info, "System.Xml", "XmlChildEnumerator");
        }
        inline app::XmlChildEnumerator* create() {
            return il2cpp::create_object<app::XmlChildEnumerator>(get_class());
        }
    } // namespace XmlChildEnumerator
} // namespace app::classes::types
