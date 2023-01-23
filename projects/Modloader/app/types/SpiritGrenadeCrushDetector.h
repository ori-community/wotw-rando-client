#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritGrenadeCrushDetector__Class.h>
#include <Modloader/app/structs/SpiritGrenadeCrushDetector.h>

namespace app::classes::types {
    namespace SpiritGrenadeCrushDetector {
        namespace {
            inline app::SpiritGrenadeCrushDetector__Class* type_info_ref = nullptr;
        }
        inline app::SpiritGrenadeCrushDetector__Class** type_info = &type_info_ref;
        inline app::SpiritGrenadeCrushDetector__Class* get_class() {
            return il2cpp::get_class<app::SpiritGrenadeCrushDetector__Class>(type_info, "", "SpiritGrenadeCrushDetector");
        }
        inline app::SpiritGrenadeCrushDetector* create() {
            return il2cpp::create_object<app::SpiritGrenadeCrushDetector>(get_class());
        }
    } // namespace SpiritGrenadeCrushDetector
} // namespace app::classes::types
