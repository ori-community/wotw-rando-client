#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClientSessionStartPayload__Class.h>
#include <Modloader/app/structs/ClientSessionStartPayload.h>

namespace app::classes::types {
    namespace ClientSessionStartPayload {
        namespace {
            inline app::ClientSessionStartPayload__Class* type_info_ref = nullptr;
        }
        inline app::ClientSessionStartPayload__Class** type_info = &type_info_ref;
        inline app::ClientSessionStartPayload__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionStartPayload__Class>(type_info, "PlayFab.PlayStreamModels", "ClientSessionStartPayload");
        }
        inline app::ClientSessionStartPayload* create() {
            return il2cpp::create_object<app::ClientSessionStartPayload>(get_class());
        }
    } // namespace ClientSessionStartPayload
} // namespace app::classes::types
