#pragma once
#include <Modloader/app/structs/InvokableCall.h>
#include <Modloader/app/structs/InvokableCall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvokableCall {
        inline app::InvokableCall__Class** type_info() {
            static app::InvokableCall__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvokableCall__Class**)(modloader::win::memory::resolve_rva(0x0478E7A0));
            }
            return cache;
        }
        inline app::InvokableCall__Class* get_class() {
            return il2cpp::get_class<app::InvokableCall__Class>(type_info(), "UnityEngine.Events", "InvokableCall");
        }
        inline app::InvokableCall* create() {
            return il2cpp::create_object<app::InvokableCall>(get_class());
        }
    } // namespace InvokableCall
} // namespace app::classes::types
