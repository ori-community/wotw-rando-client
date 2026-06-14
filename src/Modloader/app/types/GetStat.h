#pragma once
#include <Modloader/app/structs/GetStat.h>
#include <Modloader/app/structs/GetStat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetStat {
        inline app::GetStat__Class** type_info() {
            static app::GetStat__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetStat__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetStat__Class* get_class() {
            return il2cpp::get_class<app::GetStat__Class>(type_info(), "", "GetStat");
        }
        inline app::GetStat* create() {
            return il2cpp::create_object<app::GetStat>(get_class());
        }
    } // namespace GetStat
} // namespace app::classes::types
