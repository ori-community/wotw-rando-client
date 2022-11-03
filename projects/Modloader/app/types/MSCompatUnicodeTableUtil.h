#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MSCompatUnicodeTableUtil {
        inline app::MSCompatUnicodeTableUtil__Class** type_info = (app::MSCompatUnicodeTableUtil__Class**)(modloader::win::memory::resolve_rva(0x047066C0));
        inline app::MSCompatUnicodeTableUtil__Class* get_class() {
            return il2cpp::get_class<app::MSCompatUnicodeTableUtil__Class>(type_info, "Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil");
        }
        inline app::MSCompatUnicodeTableUtil* create() {
            return il2cpp::create_object<app::MSCompatUnicodeTableUtil>(get_class());
        }
    } // namespace MSCompatUnicodeTableUtil
} // namespace app::classes::types
