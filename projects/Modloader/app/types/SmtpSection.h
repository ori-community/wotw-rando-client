#pragma once
#include <Modloader/app/structs/SmtpSection.h>
#include <Modloader/app/structs/SmtpSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmtpSection {
        inline app::SmtpSection__Class** type_info() {
            static app::SmtpSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmtpSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmtpSection__Class* get_class() {
            return il2cpp::get_class<app::SmtpSection__Class>(type_info(), "System.Net.Configuration", "SmtpSection");
        }
        inline app::SmtpSection* create() {
            return il2cpp::create_object<app::SmtpSection>(get_class());
        }
    } // namespace SmtpSection
} // namespace app::classes::types
