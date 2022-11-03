#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetStatCallback {
        namespace {
            inline app::GetStatCallback__Class* type_info_ref = nullptr;
        }
        inline app::GetStatCallback__Class** type_info = &type_info_ref;
        inline app::GetStatCallback__Class* get_class() {
            return il2cpp::get_class<app::GetStatCallback__Class>(type_info, "", "GetStatCallback");
        }
        inline app::GetStatCallback* create() {
            return il2cpp::create_object<app::GetStatCallback>(get_class());
        }
    } // namespace GetStatCallback
} // namespace app::classes::types
