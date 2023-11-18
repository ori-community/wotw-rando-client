#pragma once
#include <Modloader/app/structs/Ucs4Encoding2143.h>
#include <Modloader/app/structs/Ucs4Encoding2143__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ucs4Encoding2143 {
        inline app::Ucs4Encoding2143__Class** type_info() {
            static app::Ucs4Encoding2143__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ucs4Encoding2143__Class**)(modloader::win::memory::resolve_rva(0x0475A260));
            }
            return cache;
        }
        inline app::Ucs4Encoding2143__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Encoding2143__Class>(type_info(), "System.Xml", "Ucs4Encoding2143");
        }
        inline app::Ucs4Encoding2143* create() {
            return il2cpp::create_object<app::Ucs4Encoding2143>(get_class());
        }
    } // namespace Ucs4Encoding2143
} // namespace app::classes::types
