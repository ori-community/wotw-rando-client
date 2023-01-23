#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReadContentAsBinaryHelper__Class.h>
#include <Modloader/app/structs/ReadContentAsBinaryHelper.h>

namespace app::classes::types {
    namespace ReadContentAsBinaryHelper {
        namespace {
            inline app::ReadContentAsBinaryHelper__Class* type_info_ref = nullptr;
        }
        inline app::ReadContentAsBinaryHelper__Class** type_info = &type_info_ref;
        inline app::ReadContentAsBinaryHelper__Class* get_class() {
            return il2cpp::get_class<app::ReadContentAsBinaryHelper__Class>(type_info, "System.Xml", "ReadContentAsBinaryHelper");
        }
        inline app::ReadContentAsBinaryHelper* create() {
            return il2cpp::create_object<app::ReadContentAsBinaryHelper>(get_class());
        }
    } // namespace ReadContentAsBinaryHelper
} // namespace app::classes::types
