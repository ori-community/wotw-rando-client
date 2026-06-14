#pragma once
#include <Modloader/app/structs/EndPoint.h>
#include <Modloader/app/structs/EndPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EndPoint {
        inline app::EndPoint__Class** type_info() {
            static app::EndPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EndPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EndPoint__Class* get_class() {
            return il2cpp::get_class<app::EndPoint__Class>(type_info(), "System.Net", "EndPoint");
        }
        inline app::EndPoint* create() {
            return il2cpp::create_object<app::EndPoint>(get_class());
        }
    } // namespace EndPoint
} // namespace app::classes::types
