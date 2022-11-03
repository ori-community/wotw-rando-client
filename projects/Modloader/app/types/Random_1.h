#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Random_1 {
        namespace {
            inline app::Random_1__Class* type_info_ref = nullptr;
        }
        inline app::Random_1__Class** type_info = &type_info_ref;
        inline app::Random_1__Class* get_class() {
            return il2cpp::get_class<app::Random_1__Class>(type_info, "UnityEngine", "Random");
        }
        inline app::Random_1* create() {
            return il2cpp::create_object<app::Random_1>(get_class());
        }
    } // namespace Random_1
} // namespace app::classes::types
