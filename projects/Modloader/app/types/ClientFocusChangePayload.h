#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClientFocusChangePayload__Class.h>
#include <Modloader/app/structs/ClientFocusChangePayload.h>

namespace app::classes::types {
    namespace ClientFocusChangePayload {
        namespace {
            inline app::ClientFocusChangePayload__Class* type_info_ref = nullptr;
        }
        inline app::ClientFocusChangePayload__Class** type_info = &type_info_ref;
        inline app::ClientFocusChangePayload__Class* get_class() {
            return il2cpp::get_class<app::ClientFocusChangePayload__Class>(type_info, "PlayFab.PlayStreamModels", "ClientFocusChangePayload");
        }
        inline app::ClientFocusChangePayload* create() {
            return il2cpp::create_object<app::ClientFocusChangePayload>(get_class());
        }
    } // namespace ClientFocusChangePayload
} // namespace app::classes::types
