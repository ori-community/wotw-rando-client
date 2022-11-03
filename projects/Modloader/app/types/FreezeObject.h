#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FreezeObject {
        namespace {
            inline app::FreezeObject__Class* type_info_ref = nullptr;
        }
        inline app::FreezeObject__Class** type_info = &type_info_ref;
        inline app::FreezeObject__Class* get_class() {
            return il2cpp::get_class<app::FreezeObject__Class>(type_info, "", "FreezeObject");
        }
        inline app::FreezeObject* create() {
            return il2cpp::create_object<app::FreezeObject>(get_class());
        }
    } // namespace FreezeObject
} // namespace app::classes::types
