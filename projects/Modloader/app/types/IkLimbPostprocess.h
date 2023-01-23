#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IkLimbPostprocess__Class.h>
#include <Modloader/app/structs/IkLimbPostprocess.h>

namespace app::classes::types {
    namespace IkLimbPostprocess {
        namespace {
            inline app::IkLimbPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::IkLimbPostprocess__Class** type_info = &type_info_ref;
        inline app::IkLimbPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IkLimbPostprocess__Class>(type_info, "Moon", "IkLimbPostprocess");
        }
        inline app::IkLimbPostprocess* create() {
            return il2cpp::create_object<app::IkLimbPostprocess>(get_class());
        }
    } // namespace IkLimbPostprocess
} // namespace app::classes::types
