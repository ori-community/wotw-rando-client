#pragma once
#include <Modloader/app/structs/OnlineHandler.h>
#include <Modloader/app/structs/OnlineHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnlineHandler {
        inline app::OnlineHandler__Class** type_info() {
            static app::OnlineHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnlineHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnlineHandler__Class* get_class() {
            return il2cpp::get_class<app::OnlineHandler__Class>(type_info(), "", "OnlineHandler");
        }
        inline app::OnlineHandler* create() {
            return il2cpp::create_object<app::OnlineHandler>(get_class());
        }
    } // namespace OnlineHandler
} // namespace app::classes::types
