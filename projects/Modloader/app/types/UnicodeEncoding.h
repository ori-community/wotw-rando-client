#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnicodeEncoding {
        inline app::UnicodeEncoding__Class** type_info = (app::UnicodeEncoding__Class**)(modloader::win::memory::resolve_rva(0x0475D3C0));
        inline app::UnicodeEncoding__Class* get_class() {
            return il2cpp::get_class<app::UnicodeEncoding__Class>(type_info, "System.Text", "UnicodeEncoding");
        }
        inline app::UnicodeEncoding* create() {
            return il2cpp::create_object<app::UnicodeEncoding>(get_class());
        }
    } // namespace UnicodeEncoding
} // namespace app::classes::types
