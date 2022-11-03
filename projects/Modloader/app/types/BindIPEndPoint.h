#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BindIPEndPoint {
        namespace {
            inline app::BindIPEndPoint__Class* type_info_ref = nullptr;
        }
        inline app::BindIPEndPoint__Class** type_info = &type_info_ref;
        inline app::BindIPEndPoint__Class* get_class() {
            return il2cpp::get_class<app::BindIPEndPoint__Class>(type_info, "System.Net", "BindIPEndPoint");
        }
        inline app::BindIPEndPoint* create() {
            return il2cpp::create_object<app::BindIPEndPoint>(get_class());
        }
    } // namespace BindIPEndPoint
} // namespace app::classes::types
