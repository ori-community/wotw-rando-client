#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGenericResourceEnumerator {
        inline app::IGenericResourceEnumerator__Class** type_info = (app::IGenericResourceEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0473A638));
        inline app::IGenericResourceEnumerator__Class* get_class() {
            return il2cpp::get_class<app::IGenericResourceEnumerator__Class>(type_info, "", "IGenericResourceEnumerator");
        }
    } // namespace IGenericResourceEnumerator
} // namespace app::classes::types
