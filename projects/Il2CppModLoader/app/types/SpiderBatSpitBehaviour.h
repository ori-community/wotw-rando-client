#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
