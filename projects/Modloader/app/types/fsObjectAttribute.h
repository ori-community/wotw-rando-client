#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsObjectAttribute {
        namespace {
            inline app::fsObjectAttribute__Class* type_info_ref = nullptr;
        }
        inline app::fsObjectAttribute__Class** type_info = &type_info_ref;
        inline app::fsObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsObjectAttribute__Class>(type_info, "FullSerializer", "fsObjectAttribute");
        }
        inline app::fsObjectAttribute* create() {
            return il2cpp::create_object<app::fsObjectAttribute>(get_class());
        }
    } // namespace fsObjectAttribute
} // namespace app::classes::types
