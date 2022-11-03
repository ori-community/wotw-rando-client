#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XdrValidator {
        inline app::XdrValidator__Class** type_info = (app::XdrValidator__Class**)(modloader::win::memory::resolve_rva(0x0473BDF0));
        inline app::XdrValidator__Class* get_class() {
            return il2cpp::get_class<app::XdrValidator__Class>(type_info, "System.Xml.Schema", "XdrValidator");
        }
        inline app::XdrValidator* create() {
            return il2cpp::create_object<app::XdrValidator>(get_class());
        }
    } // namespace XdrValidator
} // namespace app::classes::types
