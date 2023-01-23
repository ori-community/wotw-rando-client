#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SR_6__Class.h>
#include <Modloader/app/structs/SR_6.h>

namespace app::classes::types {
    namespace SR_6 {
        namespace {
            inline app::SR_6__Class* type_info_ref = nullptr;
        }
        inline app::SR_6__Class** type_info = &type_info_ref;
        inline app::SR_6__Class* get_class() {
            return il2cpp::get_class<app::SR_6__Class>(type_info, "Unity.IO.Compression", "SR");
        }
        inline app::SR_6* create() {
            return il2cpp::create_object<app::SR_6>(get_class());
        }
    } // namespace SR_6
} // namespace app::classes::types
