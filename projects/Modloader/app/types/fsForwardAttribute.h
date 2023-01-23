#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsForwardAttribute__Class.h>
#include <Modloader/app/structs/fsForwardAttribute.h>

namespace app::classes::types {
    namespace fsForwardAttribute {
        namespace {
            inline app::fsForwardAttribute__Class* type_info_ref = nullptr;
        }
        inline app::fsForwardAttribute__Class** type_info = &type_info_ref;
        inline app::fsForwardAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsForwardAttribute__Class>(type_info, "FullSerializer", "fsForwardAttribute");
        }
        inline app::fsForwardAttribute* create() {
            return il2cpp::create_object<app::fsForwardAttribute>(get_class());
        }
    } // namespace fsForwardAttribute
} // namespace app::classes::types
