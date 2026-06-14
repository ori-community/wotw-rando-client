#pragma once
#include <Modloader/app/structs/UTF7Encoding.h>
#include <Modloader/app/structs/UTF7Encoding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UTF7Encoding {
        inline app::UTF7Encoding__Class** type_info() {
            static app::UTF7Encoding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UTF7Encoding__Class**)(modloader::win::memory::resolve_rva(0x047560F0));
            }
            return cache;
        }
        inline app::UTF7Encoding__Class* get_class() {
            return il2cpp::get_class<app::UTF7Encoding__Class>(type_info(), "System.Text", "UTF7Encoding");
        }
        inline app::UTF7Encoding* create() {
            return il2cpp::create_object<app::UTF7Encoding>(get_class());
        }
    } // namespace UTF7Encoding
} // namespace app::classes::types
