#pragma once
#include <Modloader/app/structs/BaseInvokableCall.h>
#include <Modloader/app/structs/BaseInvokableCall__Array.h>
#include <Modloader/app/structs/BaseInvokableCall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseInvokableCall {
        inline app::BaseInvokableCall__Class** type_info() {
            static app::BaseInvokableCall__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseInvokableCall__Class**)(modloader::win::memory::resolve_rva(0x0473FEF8));
            }
            return cache;
        }
        inline app::BaseInvokableCall__Class* get_class() {
            return il2cpp::get_class<app::BaseInvokableCall__Class>(type_info(), "UnityEngine.Events", "BaseInvokableCall");
        }
        inline app::BaseInvokableCall* create() {
            return il2cpp::create_object<app::BaseInvokableCall>(get_class());
        }
        inline app::BaseInvokableCall__Array* create_array(int size) {
            return il2cpp::array_new<app::BaseInvokableCall__Array>(get_class(), size);
        }
        inline app::BaseInvokableCall__Array* create_array(const std::vector<app::BaseInvokableCall*>& items) {
            return il2cpp::array_new<app::BaseInvokableCall__Array>(get_class(), items);
        }
    } // namespace BaseInvokableCall
} // namespace app::classes::types
