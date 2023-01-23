#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UncNameHelper__Class.h>
#include <Modloader/app/structs/UncNameHelper.h>

namespace app::classes::types {
    namespace UncNameHelper {
        namespace {
            inline app::UncNameHelper__Class* type_info_ref = nullptr;
        }
        inline app::UncNameHelper__Class** type_info = &type_info_ref;
        inline app::UncNameHelper__Class* get_class() {
            return il2cpp::get_class<app::UncNameHelper__Class>(type_info, "System", "UncNameHelper");
        }
        inline app::UncNameHelper* create() {
            return il2cpp::create_object<app::UncNameHelper>(get_class());
        }
    } // namespace UncNameHelper
} // namespace app::classes::types
