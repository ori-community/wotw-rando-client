#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBatSpitBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBatSpitBehaviour.h>

namespace app::classes::types {
    namespace SpiderBatSpitBehaviour {
        namespace {
            inline app::SpiderBatSpitBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatSpitBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatSpitBehaviour__Class>(type_info, "", "SpiderBatSpitBehaviour");
        }
        inline app::SpiderBatSpitBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatSpitBehaviour>(get_class());
        }
    } // namespace SpiderBatSpitBehaviour
} // namespace app::classes::types
