#pragma once
#include <Modloader/app/structs/SafeAsciiDecoder.h>
#include <Modloader/app/structs/SafeAsciiDecoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeAsciiDecoder {
        inline app::SafeAsciiDecoder__Class** type_info() {
            static app::SafeAsciiDecoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeAsciiDecoder__Class**)(modloader::win::memory::resolve_rva(0x04707560));
            }
            return cache;
        }
        inline app::SafeAsciiDecoder__Class* get_class() {
            return il2cpp::get_class<app::SafeAsciiDecoder__Class>(type_info(), "System.Xml", "SafeAsciiDecoder");
        }
        inline app::SafeAsciiDecoder* create() {
            return il2cpp::create_object<app::SafeAsciiDecoder>(get_class());
        }
    } // namespace SafeAsciiDecoder
} // namespace app::classes::types
