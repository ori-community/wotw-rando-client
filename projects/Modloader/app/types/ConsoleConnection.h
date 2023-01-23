#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConsoleConnection__Class.h>
#include <Modloader/app/structs/ConsoleConnection.h>

namespace app::classes::types {
    namespace ConsoleConnection {
        namespace {
            inline app::ConsoleConnection__Class* type_info_ref = nullptr;
        }
        inline app::ConsoleConnection__Class** type_info = &type_info_ref;
        inline app::ConsoleConnection__Class* get_class() {
            return il2cpp::get_class<app::ConsoleConnection__Class>(type_info, "", "ConsoleConnection");
        }
        inline app::ConsoleConnection* create() {
            return il2cpp::create_object<app::ConsoleConnection>(get_class());
        }
    } // namespace ConsoleConnection
} // namespace app::classes::types
