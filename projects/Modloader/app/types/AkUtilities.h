#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkUtilities__Class.h>
#include <Modloader/app/structs/AkUtilities.h>

namespace app::classes::types {
    namespace AkUtilities {
        namespace {
            inline app::AkUtilities__Class* type_info_ref = nullptr;
        }
        inline app::AkUtilities__Class** type_info = &type_info_ref;
        inline app::AkUtilities__Class* get_class() {
            return il2cpp::get_class<app::AkUtilities__Class>(type_info, "", "AkUtilities");
        }
        inline app::AkUtilities* create() {
            return il2cpp::create_object<app::AkUtilities>(get_class());
        }
    } // namespace AkUtilities
} // namespace app::classes::types
