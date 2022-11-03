#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpaException {
        inline app::UpaException__Class** type_info = (app::UpaException__Class**)(modloader::win::memory::resolve_rva(0x047575B0));
        inline app::UpaException__Class* get_class() {
            return il2cpp::get_class<app::UpaException__Class>(type_info, "System.Xml.Schema", "UpaException");
        }
        inline app::UpaException* create() {
            return il2cpp::create_object<app::UpaException>(get_class());
        }
    } // namespace UpaException
} // namespace app::classes::types
