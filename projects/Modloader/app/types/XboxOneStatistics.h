#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxOneStatistics__Class.h>
#include <Modloader/app/structs/XboxOneStatistics.h>

namespace app::classes::types {
    namespace XboxOneStatistics {
        namespace {
            inline app::XboxOneStatistics__Class* type_info_ref = nullptr;
        }
        inline app::XboxOneStatistics__Class** type_info = &type_info_ref;
        inline app::XboxOneStatistics__Class* get_class() {
            return il2cpp::get_class<app::XboxOneStatistics__Class>(type_info, "", "XboxOneStatistics");
        }
        inline app::XboxOneStatistics* create() {
            return il2cpp::create_object<app::XboxOneStatistics>(get_class());
        }
    } // namespace XboxOneStatistics
} // namespace app::classes::types
