#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkPathParams {
        namespace {
            inline app::AkPathParams__Class* type_info_ref = nullptr;
        }
        inline app::AkPathParams__Class** type_info = &type_info_ref;
        inline app::AkPathParams__Class* get_class() {
            return il2cpp::get_class<app::AkPathParams__Class>(type_info, "", "AkPathParams");
        }
        inline app::AkPathParams* create() {
            return il2cpp::create_object<app::AkPathParams>(get_class());
        }
    } // namespace AkPathParams
} // namespace app::classes::types
