#pragma once
#include <Modloader/app/structs/Utils.h>
#include <Modloader/app/structs/Utils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Utils {
        inline app::Utils__Class** type_info() {
            static app::Utils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Utils__Class**)(modloader::win::memory::resolve_rva(0x047128A0));
            }
            return cache;
        }
        inline app::Utils__Class* get_class() {
            return il2cpp::get_class<app::Utils__Class>(type_info(), "System.Security.Cryptography", "Utils");
        }
        inline app::Utils* create() {
            return il2cpp::create_object<app::Utils>(get_class());
        }
    } // namespace Utils
} // namespace app::classes::types
