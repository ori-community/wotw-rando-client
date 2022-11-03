#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatRetaliateShriekBehaviour {
        namespace {
            inline app::SpiderBatRetaliateShriekBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatRetaliateShriekBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatRetaliateShriekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatRetaliateShriekBehaviour__Class>(type_info, "", "SpiderBatRetaliateShriekBehaviour");
        }
        inline app::SpiderBatRetaliateShriekBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatRetaliateShriekBehaviour>(get_class());
        }
    } // namespace SpiderBatRetaliateShriekBehaviour
} // namespace app::classes::types
