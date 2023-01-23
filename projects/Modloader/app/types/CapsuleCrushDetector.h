#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CapsuleCrushDetector__Class.h>
#include <Modloader/app/structs/CapsuleCrushDetector.h>

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
