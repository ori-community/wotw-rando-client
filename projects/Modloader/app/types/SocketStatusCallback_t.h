#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SocketStatusCallback_t__Class.h>
#include <Modloader/app/structs/SocketStatusCallback_t.h>
#include <Modloader/app/structs/SocketStatusCallback_t__Boxed.h>

namespace app::classes::types {
    namespace SocketStatusCallback_t {
        namespace {
            inline app::SocketStatusCallback_t__Class* type_info_ref = nullptr;
        }
        inline app::SocketStatusCallback_t__Class** type_info = &type_info_ref;
        inline app::SocketStatusCallback_t__Class* get_class() {
            return il2cpp::get_class<app::SocketStatusCallback_t__Class>(type_info, "Steamworks", "SocketStatusCallback_t");
        }
        inline app::SocketStatusCallback_t* create() {
            return il2cpp::create_object<app::SocketStatusCallback_t>(get_class());
        }
        inline app::SocketStatusCallback_t__Boxed* box(app::SocketStatusCallback_t value) {
            return il2cpp::box_value<app::SocketStatusCallback_t__Boxed>(get_class(), value);
        }
    } // namespace SocketStatusCallback_t
} // namespace app::classes::types
