#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SplineUtil {
        namespace {
            inline app::SplineUtil__Class* type_info_ref = nullptr;
        }
        inline app::SplineUtil__Class** type_info = &type_info_ref;
        inline app::SplineUtil__Class* get_class() {
            return il2cpp::get_class<app::SplineUtil__Class>(type_info, "", "SplineUtil");
        }
        inline app::SplineUtil* create() {
            return il2cpp::create_object<app::SplineUtil>(get_class());
        }
    } // namespace SplineUtil
} // namespace app::classes::types
