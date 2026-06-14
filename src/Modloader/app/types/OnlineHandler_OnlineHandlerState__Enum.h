#pragma once
#include <Modloader/app/structs/OnlineHandler_OnlineHandlerState__Enum.h>
#include <Modloader/app/structs/OnlineHandler_OnlineHandlerState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnlineHandler_OnlineHandlerState__Enum {
        inline app::OnlineHandler_OnlineHandlerState__Enum__Class** type_info() {
            static app::OnlineHandler_OnlineHandlerState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnlineHandler_OnlineHandlerState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnlineHandler_OnlineHandlerState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OnlineHandler_OnlineHandlerState__Enum__Class>(type_info(), "", "OnlineHandler", "OnlineHandlerState");
        }
        inline app::OnlineHandler_OnlineHandlerState__Enum* create() {
            return il2cpp::create_object<app::OnlineHandler_OnlineHandlerState__Enum>(get_class());
        }
    } // namespace OnlineHandler_OnlineHandlerState__Enum
} // namespace app::classes::types
