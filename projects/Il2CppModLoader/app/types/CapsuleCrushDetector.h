#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CapsuleCrushDetector {
        namespace {
            inline app::CapsuleCrushDetector__Class* type_info_ref = nullptr;
        }
        inline app::CapsuleCrushDetector__Class** type_info = &type_info_ref;
        inline app::CapsuleCrushDetector__Class* get_class() {
            return il2cpp::get_class<app::CapsuleCrushDetector__Class>(type_info, "", "CapsuleCrushDetector");
        }
        inline app::CapsuleCrushDetector* create() {
            return il2cpp::create_object<app::CapsuleCrushDetector>(get_class());
        }
    } // namespace CapsuleCrushDetector
} // namespace app::classes::types
