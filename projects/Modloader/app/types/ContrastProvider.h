#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContrastProvider__Class.h>
#include <Modloader/app/structs/ContrastProvider.h>

namespace app::classes::types {
    namespace ContrastProvider {
        namespace {
            inline app::ContrastProvider__Class* type_info_ref = nullptr;
        }
        inline app::ContrastProvider__Class** type_info = &type_info_ref;
        inline app::ContrastProvider__Class* get_class() {
            return il2cpp::get_class<app::ContrastProvider__Class>(type_info, "", "ContrastProvider");
        }
        inline app::ContrastProvider* create() {
            return il2cpp::create_object<app::ContrastProvider>(get_class());
        }
    } // namespace ContrastProvider
} // namespace app::classes::types
