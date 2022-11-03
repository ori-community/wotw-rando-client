#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HumanTrait {
        namespace {
            inline app::HumanTrait__Class* type_info_ref = nullptr;
        }
        inline app::HumanTrait__Class** type_info = &type_info_ref;
        inline app::HumanTrait__Class* get_class() {
            return il2cpp::get_class<app::HumanTrait__Class>(type_info, "UnityEngine", "HumanTrait");
        }
        inline app::HumanTrait* create() {
            return il2cpp::create_object<app::HumanTrait>(get_class());
        }
    } // namespace HumanTrait
} // namespace app::classes::types
