#pragma once
#include <Modloader/app/structs/XboxOneStatistics.h>
#include <Modloader/app/structs/XboxOneStatistics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneStatistics {
        inline app::XboxOneStatistics__Class** type_info() {
            static app::XboxOneStatistics__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxOneStatistics__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxOneStatistics__Class* get_class() {
            return il2cpp::get_class<app::XboxOneStatistics__Class>(type_info(), "", "XboxOneStatistics");
        }
        inline app::XboxOneStatistics* create() {
            return il2cpp::create_object<app::XboxOneStatistics>(get_class());
        }
    } // namespace XboxOneStatistics
} // namespace app::classes::types
