#pragma once
#include <Modloader/app/structs/ReEngageUI.h>
#include <Modloader/app/structs/ReEngageUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReEngageUI {
        inline app::ReEngageUI__Class** type_info() {
            static app::ReEngageUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReEngageUI__Class**)(modloader::win::memory::resolve_rva(0x0473E370));
            }
            return cache;
        }
        inline app::ReEngageUI__Class* get_class() {
            return il2cpp::get_class<app::ReEngageUI__Class>(type_info(), "", "ReEngageUI");
        }
        inline app::ReEngageUI* create() {
            return il2cpp::create_object<app::ReEngageUI>(get_class());
        }
    } // namespace ReEngageUI
} // namespace app::classes::types
