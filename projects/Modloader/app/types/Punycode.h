#pragma once
#include <Modloader/app/structs/Punycode.h>
#include <Modloader/app/structs/Punycode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Punycode {
        inline app::Punycode__Class** type_info() {
            static app::Punycode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Punycode__Class**)(modloader::win::memory::resolve_rva(0x04730158));
            }
            return cache;
        }
        inline app::Punycode__Class* get_class() {
            return il2cpp::get_class<app::Punycode__Class>(type_info(), "System.Globalization", "Punycode");
        }
        inline app::Punycode* create() {
            return il2cpp::create_object<app::Punycode>(get_class());
        }
    } // namespace Punycode
} // namespace app::classes::types
