#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnlineHandler_OnlineHandlerState__Enum__Class.h>
#include <Modloader/app/structs/OnlineHandler_OnlineHandlerState__Enum.h>

namespace app::classes::types {
    namespace OnlineHandler_OnlineHandlerState__Enum {
        namespace {
            inline app::OnlineHandler_OnlineHandlerState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::OnlineHandler_OnlineHandlerState__Enum__Class** type_info = &type_info_ref;
        inline app::OnlineHandler_OnlineHandlerState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OnlineHandler_OnlineHandlerState__Enum__Class>(type_info, "", "OnlineHandler", "OnlineHandlerState");
        }
        inline app::OnlineHandler_OnlineHandlerState__Enum* create() {
            return il2cpp::create_object<app::OnlineHandler_OnlineHandlerState__Enum>(get_class());
        }
    } // namespace OnlineHandler_OnlineHandlerState__Enum
} // namespace app::classes::types
