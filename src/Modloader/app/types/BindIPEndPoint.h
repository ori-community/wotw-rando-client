#pragma once
#include <Modloader/app/structs/BindIPEndPoint.h>
#include <Modloader/app/structs/BindIPEndPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindIPEndPoint {
        inline app::BindIPEndPoint__Class** type_info() {
            static app::BindIPEndPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BindIPEndPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BindIPEndPoint__Class* get_class() {
            return il2cpp::get_class<app::BindIPEndPoint__Class>(type_info(), "System.Net", "BindIPEndPoint");
        }
        inline app::BindIPEndPoint* create() {
            return il2cpp::create_object<app::BindIPEndPoint>(get_class());
        }
    } // namespace BindIPEndPoint
} // namespace app::classes::types
