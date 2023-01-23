#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixFeet__Class.h>
#include <Modloader/app/structs/FixFeet.h>

namespace app::classes::types {
    namespace FixFeet {
        namespace {
            inline app::FixFeet__Class* type_info_ref = nullptr;
        }
        inline app::FixFeet__Class** type_info = &type_info_ref;
        inline app::FixFeet__Class* get_class() {
            return il2cpp::get_class<app::FixFeet__Class>(type_info, "RootMotion.Demos", "FixFeet");
        }
        inline app::FixFeet* create() {
            return il2cpp::create_object<app::FixFeet>(get_class());
        }
    } // namespace FixFeet
} // namespace app::classes::types
