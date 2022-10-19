#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmtpSection {
        namespace {
            inline app::SmtpSection__Class* type_info_ref = nullptr;
        }
        inline app::SmtpSection__Class** type_info = &type_info_ref;
        inline app::SmtpSection__Class* get_class() {
            return il2cpp::get_class<app::SmtpSection__Class>(type_info, "System.Net.Configuration", "SmtpSection");
        }
        inline app::SmtpSection* create() {
            return il2cpp::create_object<app::SmtpSection>(get_class());
        }
    } // namespace SmtpSection
} // namespace app::classes::types
