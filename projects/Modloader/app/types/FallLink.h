#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FallLink__Class.h>
#include <Modloader/app/structs/FallLink.h>

namespace app::classes::types {
    namespace FallLink {
        namespace {
            inline app::FallLink__Class* type_info_ref = nullptr;
        }
        inline app::FallLink__Class** type_info = &type_info_ref;
        inline app::FallLink__Class* get_class() {
            return il2cpp::get_class<app::FallLink__Class>(type_info, "", "FallLink");
        }
        inline app::FallLink* create() {
            return il2cpp::create_object<app::FallLink>(get_class());
        }
    } // namespace FallLink
} // namespace app::classes::types
