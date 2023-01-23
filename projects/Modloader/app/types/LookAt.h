#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LookAt__Class.h>
#include <Modloader/app/structs/LookAt.h>

namespace app::classes::types {
    namespace LookAt {
        namespace {
            inline app::LookAt__Class* type_info_ref = nullptr;
        }
        inline app::LookAt__Class** type_info = &type_info_ref;
        inline app::LookAt__Class* get_class() {
            return il2cpp::get_class<app::LookAt__Class>(type_info, "", "LookAt");
        }
        inline app::LookAt* create() {
            return il2cpp::create_object<app::LookAt>(get_class());
        }
    } // namespace LookAt
} // namespace app::classes::types
