#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlLoader__Class.h>
#include <Modloader/app/structs/XmlLoader.h>

namespace app::classes::types {
    namespace XmlLoader {
        inline app::XmlLoader__Class** type_info = (app::XmlLoader__Class**)(modloader::win::memory::resolve_rva(0x04703D28));
        inline app::XmlLoader__Class* get_class() {
            return il2cpp::get_class<app::XmlLoader__Class>(type_info, "System.Xml", "XmlLoader");
        }
        inline app::XmlLoader* create() {
            return il2cpp::create_object<app::XmlLoader>(get_class());
        }
    } // namespace XmlLoader
} // namespace app::classes::types
