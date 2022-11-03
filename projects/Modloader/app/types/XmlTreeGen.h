#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTreeGen {
        inline app::XmlTreeGen__Class** type_info = (app::XmlTreeGen__Class**)(modloader::win::memory::resolve_rva(0x04757398));
        inline app::XmlTreeGen__Class* get_class() {
            return il2cpp::get_class<app::XmlTreeGen__Class>(type_info, "System.Data", "XmlTreeGen");
        }
        inline app::XmlTreeGen* create() {
            return il2cpp::create_object<app::XmlTreeGen>(get_class());
        }
    } // namespace XmlTreeGen
} // namespace app::classes::types
