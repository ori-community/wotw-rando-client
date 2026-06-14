#pragma once
#include <Modloader/app/structs/LinkXboxAccountResult_1.h>
#include <Modloader/app/structs/LinkXboxAccountResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkXboxAccountResult_1 {
        inline app::LinkXboxAccountResult_1__Class** type_info() {
            static app::LinkXboxAccountResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkXboxAccountResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477BD58));
            }
            return cache;
        }
        inline app::LinkXboxAccountResult_1__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountResult_1__Class>(type_info(), "PlayFab.ServerModels", "LinkXboxAccountResult");
        }
        inline app::LinkXboxAccountResult_1* create() {
            return il2cpp::create_object<app::LinkXboxAccountResult_1>(get_class());
        }
    } // namespace LinkXboxAccountResult_1
} // namespace app::classes::types
