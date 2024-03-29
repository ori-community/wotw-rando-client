#pragma once
#include <Modloader/app/structs/Ucs4Encoding.h>
#include <Modloader/app/structs/Ucs4Encoding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ucs4Encoding {
        inline app::Ucs4Encoding__Class** type_info() {
            static app::Ucs4Encoding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ucs4Encoding__Class**)(modloader::win::memory::resolve_rva(0x04723558));
            }
            return cache;
        }
        inline app::Ucs4Encoding__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Encoding__Class>(type_info(), "System.Xml", "Ucs4Encoding");
        }
        inline app::Ucs4Encoding* create() {
            return il2cpp::create_object<app::Ucs4Encoding>(get_class());
        }
    } // namespace Ucs4Encoding
} // namespace app::classes::types
