#pragma once
#include <Modloader/app/structs/SpiderBatRetaliateShriekBehaviour.h>
#include <Modloader/app/structs/SpiderBatRetaliateShriekBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatRetaliateShriekBehaviour {
        inline app::SpiderBatRetaliateShriekBehaviour__Class** type_info() {
            static app::SpiderBatRetaliateShriekBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatRetaliateShriekBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatRetaliateShriekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatRetaliateShriekBehaviour__Class>(type_info(), "", "SpiderBatRetaliateShriekBehaviour");
        }
        inline app::SpiderBatRetaliateShriekBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatRetaliateShriekBehaviour>(get_class());
        }
    } // namespace SpiderBatRetaliateShriekBehaviour
} // namespace app::classes::types
