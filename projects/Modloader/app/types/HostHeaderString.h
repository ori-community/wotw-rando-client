#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HostHeaderString__Class.h>
#include <Modloader/app/structs/HostHeaderString.h>

namespace app::classes::types {
    namespace HostHeaderString {
        namespace {
            inline app::HostHeaderString__Class* type_info_ref = nullptr;
        }
        inline app::HostHeaderString__Class** type_info = &type_info_ref;
        inline app::HostHeaderString__Class* get_class() {
            return il2cpp::get_class<app::HostHeaderString__Class>(type_info, "System.Net", "HostHeaderString");
        }
        inline app::HostHeaderString* create() {
            return il2cpp::create_object<app::HostHeaderString>(get_class());
        }
    } // namespace HostHeaderString
} // namespace app::classes::types
