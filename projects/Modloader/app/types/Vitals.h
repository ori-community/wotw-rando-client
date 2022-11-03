#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vitals {
        namespace {
            inline app::Vitals__Class* type_info_ref = nullptr;
        }
        inline app::Vitals__Class** type_info = &type_info_ref;
        inline app::Vitals__Class* get_class() {
            return il2cpp::get_class<app::Vitals__Class>(type_info, "Moon", "Vitals");
        }
        inline app::Vitals* create() {
            return il2cpp::create_object<app::Vitals>(get_class());
        }
    } // namespace Vitals
} // namespace app::classes::types
