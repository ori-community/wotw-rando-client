#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsIgnoreAttribute__Class.h>
#include <Modloader/app/structs/fsIgnoreAttribute.h>

namespace app::classes::types {
    namespace fsIgnoreAttribute {
        namespace {
            inline app::fsIgnoreAttribute__Class* type_info_ref = nullptr;
        }
        inline app::fsIgnoreAttribute__Class** type_info = &type_info_ref;
        inline app::fsIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsIgnoreAttribute__Class>(type_info, "FullSerializer", "fsIgnoreAttribute");
        }
        inline app::fsIgnoreAttribute* create() {
            return il2cpp::create_object<app::fsIgnoreAttribute>(get_class());
        }
    } // namespace fsIgnoreAttribute
} // namespace app::classes::types
