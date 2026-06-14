#pragma once
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/ServicePoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServicePoint {
        inline app::ServicePoint__Class** type_info() {
            static app::ServicePoint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServicePoint__Class**)(modloader::win::memory::resolve_rva(0x04707FB8));
            }
            return cache;
        }
        inline app::ServicePoint__Class* get_class() {
            return il2cpp::get_class<app::ServicePoint__Class>(type_info(), "System.Net", "ServicePoint");
        }
        inline app::ServicePoint* create() {
            return il2cpp::create_object<app::ServicePoint>(get_class());
        }
    } // namespace ServicePoint
} // namespace app::classes::types
