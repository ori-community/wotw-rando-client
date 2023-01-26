#pragma once
#include <Modloader/app/structs/X520_UserId.h>
#include <Modloader/app/structs/X520_UserId__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_UserId {
        inline app::X520_UserId__Class** type_info() {
            static app::X520_UserId__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X520_UserId__Class**)(modloader::win::memory::resolve_rva(0x0474E130));
            }
            return cache;
        }
        inline app::X520_UserId__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_UserId__Class>(type_info(), "Mono.Security.X509", "X520", "UserId");
        }
        inline app::X520_UserId* create() {
            return il2cpp::create_object<app::X520_UserId>(get_class());
        }
    } // namespace X520_UserId
} // namespace app::classes::types
