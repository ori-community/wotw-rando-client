#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XMLHelper__Class.h>
#include <Modloader/app/structs/XMLHelper.h>

namespace app::classes::types {
    namespace XMLHelper {
        namespace {
            inline app::XMLHelper__Class* type_info_ref = nullptr;
        }
        inline app::XMLHelper__Class** type_info = &type_info_ref;
        inline app::XMLHelper__Class* get_class() {
            return il2cpp::get_class<app::XMLHelper__Class>(type_info, "", "XMLHelper");
        }
        inline app::XMLHelper* create() {
            return il2cpp::create_object<app::XMLHelper>(get_class());
        }
    } // namespace XMLHelper
} // namespace app::classes::types
