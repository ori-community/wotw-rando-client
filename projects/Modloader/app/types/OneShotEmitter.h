#pragma once
#include <Modloader/app/structs/OneShotEmitter.h>
#include <Modloader/app/structs/OneShotEmitter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneShotEmitter {
        inline app::OneShotEmitter__Class** type_info() {
            static app::OneShotEmitter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneShotEmitter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneShotEmitter__Class* get_class() {
            return il2cpp::get_class<app::OneShotEmitter__Class>(type_info(), "", "OneShotEmitter");
        }
        inline app::OneShotEmitter* create() {
            return il2cpp::create_object<app::OneShotEmitter>(get_class());
        }
    } // namespace OneShotEmitter
} // namespace app::classes::types
