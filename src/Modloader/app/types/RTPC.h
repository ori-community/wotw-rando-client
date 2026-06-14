#pragma once
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/RTPC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RTPC {
        inline app::RTPC__Class** type_info() {
            static app::RTPC__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RTPC__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RTPC__Class* get_class() {
            return il2cpp::get_class<app::RTPC__Class>(type_info(), "AK.Wwise", "RTPC");
        }
        inline app::RTPC* create() {
            return il2cpp::create_object<app::RTPC>(get_class());
        }
    } // namespace RTPC
} // namespace app::classes::types
