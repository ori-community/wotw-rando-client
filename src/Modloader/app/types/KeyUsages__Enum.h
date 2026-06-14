#pragma once
#include <Modloader/app/structs/KeyUsages__Enum.h>
#include <Modloader/app/structs/KeyUsages__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyUsages__Enum {
        inline app::KeyUsages__Enum__Class** type_info() {
            static app::KeyUsages__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyUsages__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477F900));
            }
            return cache;
        }
        inline app::KeyUsages__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyUsages__Enum__Class>(type_info(), "Mono.Security.X509.Extensions", "KeyUsages");
        }
        inline app::KeyUsages__Enum* create() {
            return il2cpp::create_object<app::KeyUsages__Enum>(get_class());
        }
    } // namespace KeyUsages__Enum
} // namespace app::classes::types
