#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RedirectionPortal__Class.h>
#include <Modloader/app/structs/RedirectionPortal.h>

namespace app::classes::types {
    namespace RedirectionPortal {
        namespace {
            inline app::RedirectionPortal__Class* type_info_ref = nullptr;
        }
        inline app::RedirectionPortal__Class** type_info = &type_info_ref;
        inline app::RedirectionPortal__Class* get_class() {
            return il2cpp::get_class<app::RedirectionPortal__Class>(type_info, "", "RedirectionPortal");
        }
        inline app::RedirectionPortal* create() {
            return il2cpp::create_object<app::RedirectionPortal>(get_class());
        }
    } // namespace RedirectionPortal
} // namespace app::classes::types
