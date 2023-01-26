#pragma once
#include <Modloader/app/structs/UnicodeEncoding.h>
#include <Modloader/app/structs/UnicodeEncoding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnicodeEncoding {
        inline app::UnicodeEncoding__Class** type_info() {
            static app::UnicodeEncoding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnicodeEncoding__Class**)(modloader::win::memory::resolve_rva(0x0475D3C0));
            }
            return cache;
        }
        inline app::UnicodeEncoding__Class* get_class() {
            return il2cpp::get_class<app::UnicodeEncoding__Class>(type_info(), "System.Text", "UnicodeEncoding");
        }
        inline app::UnicodeEncoding* create() {
            return il2cpp::create_object<app::UnicodeEncoding>(get_class());
        }
    } // namespace UnicodeEncoding
} // namespace app::classes::types
