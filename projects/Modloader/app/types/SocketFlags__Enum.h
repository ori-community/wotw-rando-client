#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SocketFlags__Enum__Class.h>
#include <Modloader/app/structs/SocketFlags__Enum.h>

namespace app::classes::types {
    namespace SocketFlags__Enum {
        namespace {
            inline app::SocketFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SocketFlags__Enum__Class** type_info = &type_info_ref;
        inline app::SocketFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketFlags__Enum__Class>(type_info, "System.Net.Sockets", "SocketFlags");
        }
        inline app::SocketFlags__Enum* create() {
            return il2cpp::create_object<app::SocketFlags__Enum>(get_class());
        }
    } // namespace SocketFlags__Enum
} // namespace app::classes::types
