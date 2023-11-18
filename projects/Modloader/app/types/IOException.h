#pragma once
#include <Modloader/app/structs/IOException.h>
#include <Modloader/app/structs/IOException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IOException {
        inline app::IOException__Class** type_info() {
            static app::IOException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IOException__Class**)(modloader::win::memory::resolve_rva(0x04709900));
            }
            return cache;
        }
        inline app::IOException__Class* get_class() {
            return il2cpp::get_class<app::IOException__Class>(type_info(), "System.IO", "IOException");
        }
        inline app::IOException* create() {
            return il2cpp::create_object<app::IOException>(get_class());
        }
    } // namespace IOException
} // namespace app::classes::types
