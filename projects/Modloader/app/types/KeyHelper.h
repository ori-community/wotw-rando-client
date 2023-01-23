#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyHelper__Class.h>
#include <Modloader/app/structs/KeyHelper.h>

namespace app::classes::types {
    namespace KeyHelper {
        namespace {
            inline app::KeyHelper__Class* type_info_ref = nullptr;
        }
        inline app::KeyHelper__Class** type_info = &type_info_ref;
        inline app::KeyHelper__Class* get_class() {
            return il2cpp::get_class<app::KeyHelper__Class>(type_info, "System.Xml.Serialization", "KeyHelper");
        }
        inline app::KeyHelper* create() {
            return il2cpp::create_object<app::KeyHelper>(get_class());
        }
    } // namespace KeyHelper
} // namespace app::classes::types
