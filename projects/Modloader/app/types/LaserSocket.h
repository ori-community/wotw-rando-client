#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserSocket__Class.h>
#include <Modloader/app/structs/LaserSocket.h>

namespace app::classes::types {
    namespace LaserSocket {
        namespace {
            inline app::LaserSocket__Class* type_info_ref = nullptr;
        }
        inline app::LaserSocket__Class** type_info = &type_info_ref;
        inline app::LaserSocket__Class* get_class() {
            return il2cpp::get_class<app::LaserSocket__Class>(type_info, "", "LaserSocket");
        }
        inline app::LaserSocket* create() {
            return il2cpp::create_object<app::LaserSocket>(get_class());
        }
    } // namespace LaserSocket
} // namespace app::classes::types
