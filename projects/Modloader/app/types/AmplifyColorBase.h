#pragma once
#include <Modloader/app/structs/AmplifyColorBase.h>
#include <Modloader/app/structs/AmplifyColorBase__Array.h>
#include <Modloader/app/structs/AmplifyColorBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorBase {
        inline app::AmplifyColorBase__Class** type_info() {
            static app::AmplifyColorBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmplifyColorBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmplifyColorBase__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorBase__Class>(type_info(), "", "AmplifyColorBase");
        }
        inline app::AmplifyColorBase* create() {
            return il2cpp::create_object<app::AmplifyColorBase>(get_class());
        }
        inline app::AmplifyColorBase__Array* create_array(int size) {
            return il2cpp::array_new<app::AmplifyColorBase__Array>(get_class(), size);
        }
        inline app::AmplifyColorBase__Array* create_array(const std::vector<app::AmplifyColorBase*>& items) {
            return il2cpp::array_new<app::AmplifyColorBase__Array>(get_class(), items);
        }
    } // namespace AmplifyColorBase
} // namespace app::classes::types
