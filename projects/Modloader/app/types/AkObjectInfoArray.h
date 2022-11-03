#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkObjectInfoArray {
        namespace {
            inline app::AkObjectInfoArray__Class* type_info_ref = nullptr;
        }
        inline app::AkObjectInfoArray__Class** type_info = &type_info_ref;
        inline app::AkObjectInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkObjectInfoArray__Class>(type_info, "", "AkObjectInfoArray");
        }
        inline app::AkObjectInfoArray* create() {
            return il2cpp::create_object<app::AkObjectInfoArray>(get_class());
        }
    } // namespace AkObjectInfoArray
} // namespace app::classes::types
