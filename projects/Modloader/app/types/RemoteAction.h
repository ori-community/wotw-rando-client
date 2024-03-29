#pragma once
#include <Modloader/app/structs/RemoteAction.h>
#include <Modloader/app/structs/RemoteAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteAction {
        inline app::RemoteAction__Class** type_info() {
            static app::RemoteAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoteAction__Class**)(modloader::win::memory::resolve_rva(0x04736250));
            }
            return cache;
        }
        inline app::RemoteAction__Class* get_class() {
            return il2cpp::get_class<app::RemoteAction__Class>(type_info(), "", "RemoteAction");
        }
        inline app::RemoteAction* create() {
            return il2cpp::create_object<app::RemoteAction>(get_class());
        }
    } // namespace RemoteAction
} // namespace app::classes::types
