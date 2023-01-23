#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnProjectStartup__Class.h>
#include <Modloader/app/structs/OnProjectStartup.h>

namespace app::classes::types {
    namespace OnProjectStartup {
        namespace {
            inline app::OnProjectStartup__Class* type_info_ref = nullptr;
        }
        inline app::OnProjectStartup__Class** type_info = &type_info_ref;
        inline app::OnProjectStartup__Class* get_class() {
            return il2cpp::get_class<app::OnProjectStartup__Class>(type_info, "", "OnProjectStartup");
        }
        inline app::OnProjectStartup* create() {
            return il2cpp::create_object<app::OnProjectStartup>(get_class());
        }
    } // namespace OnProjectStartup
} // namespace app::classes::types
