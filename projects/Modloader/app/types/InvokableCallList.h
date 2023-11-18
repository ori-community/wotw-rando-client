#pragma once
#include <Modloader/app/structs/InvokableCallList.h>
#include <Modloader/app/structs/InvokableCallList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvokableCallList {
        inline app::InvokableCallList__Class** type_info() {
            static app::InvokableCallList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvokableCallList__Class**)(modloader::win::memory::resolve_rva(0x0473DC70));
            }
            return cache;
        }
        inline app::InvokableCallList__Class* get_class() {
            return il2cpp::get_class<app::InvokableCallList__Class>(type_info(), "UnityEngine.Events", "InvokableCallList");
        }
        inline app::InvokableCallList* create() {
            return il2cpp::create_object<app::InvokableCallList>(get_class());
        }
    } // namespace InvokableCallList
} // namespace app::classes::types
