#pragma once
#include <Modloader/app/structs/UTF8Encoding.h>
#include <Modloader/app/structs/UTF8Encoding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF8Encoding {
        inline app::UTF8Encoding__Class** type_info() {
            static app::UTF8Encoding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF8Encoding__Class**)(modloader::win::memory::resolve_rva(0x04735160));
            }
            return cache;
        }
        inline app::UTF8Encoding__Class* get_class() {
            return il2cpp::get_class<app::UTF8Encoding__Class>(type_info(), "System.Text", "UTF8Encoding");
        }
        inline app::UTF8Encoding* create() {
            return il2cpp::create_object<app::UTF8Encoding>(get_class());
        }
    } // namespace UTF8Encoding
} // namespace app::classes::types
