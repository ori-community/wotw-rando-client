#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContrastGain__Class.h>
#include <Modloader/app/structs/ContrastGain.h>

namespace app::classes::types {
    namespace ContrastGain {
        namespace {
            inline app::ContrastGain__Class* type_info_ref = nullptr;
        }
        inline app::ContrastGain__Class** type_info = &type_info_ref;
        inline app::ContrastGain__Class* get_class() {
            return il2cpp::get_class<app::ContrastGain__Class>(type_info, "Colorful", "ContrastGain");
        }
        inline app::ContrastGain* create() {
            return il2cpp::create_object<app::ContrastGain>(get_class());
        }
    } // namespace ContrastGain
} // namespace app::classes::types
