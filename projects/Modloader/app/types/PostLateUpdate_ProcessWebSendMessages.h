#pragma once
#include <Modloader/app/structs/PostLateUpdate_ProcessWebSendMessages.h>
#include <Modloader/app/structs/PostLateUpdate_ProcessWebSendMessages__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_ProcessWebSendMessages__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_ProcessWebSendMessages {
        inline app::PostLateUpdate_ProcessWebSendMessages__Class** type_info() {
            static app::PostLateUpdate_ProcessWebSendMessages__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_ProcessWebSendMessages__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_ProcessWebSendMessages__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ProcessWebSendMessages__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ProcessWebSendMessages");
        }
        inline app::PostLateUpdate_ProcessWebSendMessages* create() {
            return il2cpp::create_object<app::PostLateUpdate_ProcessWebSendMessages>(get_class());
        }
        inline app::PostLateUpdate_ProcessWebSendMessages__Boxed* box(app::PostLateUpdate_ProcessWebSendMessages value) {
            return il2cpp::box_value<app::PostLateUpdate_ProcessWebSendMessages__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ProcessWebSendMessages
} // namespace app::classes::types
