#pragma once
#include <Modloader/app/structs/FuncAction.h>
#include <Modloader/app/structs/FuncAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FuncAction {
        inline app::FuncAction__Class** type_info() {
            static app::FuncAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FuncAction__Class**)(modloader::win::memory::resolve_rva(0x04772F00));
            }
            return cache;
        }
        inline app::FuncAction__Class* get_class() {
            return il2cpp::get_class<app::FuncAction__Class>(type_info(), "", "FuncAction");
        }
        inline app::FuncAction* create() {
            return il2cpp::create_object<app::FuncAction>(get_class());
        }
    } // namespace FuncAction
} // namespace app::classes::types
