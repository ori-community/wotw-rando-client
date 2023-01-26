#pragma once
#include <Modloader/app/structs/UTF32Encoding.h>
#include <Modloader/app/structs/UTF32Encoding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF32Encoding {
        inline app::UTF32Encoding__Class** type_info() {
            static app::UTF32Encoding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF32Encoding__Class**)(modloader::win::memory::resolve_rva(0x04788858));
            }
            return cache;
        }
        inline app::UTF32Encoding__Class* get_class() {
            return il2cpp::get_class<app::UTF32Encoding__Class>(type_info(), "System.Text", "UTF32Encoding");
        }
        inline app::UTF32Encoding* create() {
            return il2cpp::create_object<app::UTF32Encoding>(get_class());
        }
    } // namespace UTF32Encoding
} // namespace app::classes::types
