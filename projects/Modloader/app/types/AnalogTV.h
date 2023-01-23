#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnalogTV__Class.h>
#include <Modloader/app/structs/AnalogTV.h>

namespace app::classes::types {
    namespace AnalogTV {
        namespace {
            inline app::AnalogTV__Class* type_info_ref = nullptr;
        }
        inline app::AnalogTV__Class** type_info = &type_info_ref;
        inline app::AnalogTV__Class* get_class() {
            return il2cpp::get_class<app::AnalogTV__Class>(type_info, "Colorful", "AnalogTV");
        }
        inline app::AnalogTV* create() {
            return il2cpp::create_object<app::AnalogTV>(get_class());
        }
    } // namespace AnalogTV
} // namespace app::classes::types
