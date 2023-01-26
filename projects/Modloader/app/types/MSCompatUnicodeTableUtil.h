#pragma once
#include <Modloader/app/structs/MSCompatUnicodeTableUtil.h>
#include <Modloader/app/structs/MSCompatUnicodeTableUtil__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MSCompatUnicodeTableUtil {
        inline app::MSCompatUnicodeTableUtil__Class** type_info() {
            static app::MSCompatUnicodeTableUtil__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MSCompatUnicodeTableUtil__Class**)(modloader::win::memory::resolve_rva(0x047066C0));
            }
            return cache;
        }
        inline app::MSCompatUnicodeTableUtil__Class* get_class() {
            return il2cpp::get_class<app::MSCompatUnicodeTableUtil__Class>(type_info(), "Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil");
        }
        inline app::MSCompatUnicodeTableUtil* create() {
            return il2cpp::create_object<app::MSCompatUnicodeTableUtil>(get_class());
        }
    } // namespace MSCompatUnicodeTableUtil
} // namespace app::classes::types
