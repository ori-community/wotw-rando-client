#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlUrlResolver__Class.h>
#include <Modloader/app/structs/XmlUrlResolver.h>

namespace app::classes::types {
    namespace XmlUrlResolver {
        inline app::XmlUrlResolver__Class** type_info = (app::XmlUrlResolver__Class**)(modloader::win::memory::resolve_rva(0x04750BE8));
        inline app::XmlUrlResolver__Class* get_class() {
            return il2cpp::get_class<app::XmlUrlResolver__Class>(type_info, "System.Xml", "XmlUrlResolver");
        }
        inline app::XmlUrlResolver* create() {
            return il2cpp::create_object<app::XmlUrlResolver>(get_class());
        }
    } // namespace XmlUrlResolver
} // namespace app::classes::types
