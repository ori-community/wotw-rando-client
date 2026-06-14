#pragma once
#include <Modloader/app/structs/XboxOneUsers.h>
#include <Modloader/app/structs/XboxOneUsers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneUsers {
        inline app::XboxOneUsers__Class** type_info() {
            static app::XboxOneUsers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneUsers__Class**)(modloader::win::memory::resolve_rva(0x04706C10));
            }
            return cache;
        }
        inline app::XboxOneUsers__Class* get_class() {
            return il2cpp::get_class<app::XboxOneUsers__Class>(type_info(), "", "XboxOneUsers");
        }
        inline app::XboxOneUsers* create() {
            return il2cpp::create_object<app::XboxOneUsers>(get_class());
        }
    } // namespace XboxOneUsers
} // namespace app::classes::types
