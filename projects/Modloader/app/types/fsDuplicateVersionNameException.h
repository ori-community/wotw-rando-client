#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsDuplicateVersionNameException {
        inline app::fsDuplicateVersionNameException__Class** type_info = (app::fsDuplicateVersionNameException__Class**)(modloader::win::memory::resolve_rva(0x04748460));
        inline app::fsDuplicateVersionNameException__Class* get_class() {
            return il2cpp::get_class<app::fsDuplicateVersionNameException__Class>(type_info, "FullSerializer", "fsDuplicateVersionNameException");
        }
        inline app::fsDuplicateVersionNameException* create() {
            return il2cpp::create_object<app::fsDuplicateVersionNameException>(get_class());
        }
    } // namespace fsDuplicateVersionNameException
} // namespace app::classes::types
