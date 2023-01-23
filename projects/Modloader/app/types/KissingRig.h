#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KissingRig__Class.h>
#include <Modloader/app/structs/KissingRig.h>

namespace app::classes::types {
    namespace KissingRig {
        namespace {
            inline app::KissingRig__Class* type_info_ref = nullptr;
        }
        inline app::KissingRig__Class** type_info = &type_info_ref;
        inline app::KissingRig__Class* get_class() {
            return il2cpp::get_class<app::KissingRig__Class>(type_info, "RootMotion.Demos", "KissingRig");
        }
        inline app::KissingRig* create() {
            return il2cpp::create_object<app::KissingRig>(get_class());
        }
    } // namespace KissingRig
} // namespace app::classes::types
