#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LanguageChanger__Class.h>
#include <Modloader/app/structs/LanguageChanger.h>

namespace app::classes::types {
    namespace LanguageChanger {
        namespace {
            inline app::LanguageChanger__Class* type_info_ref = nullptr;
        }
        inline app::LanguageChanger__Class** type_info = &type_info_ref;
        inline app::LanguageChanger__Class* get_class() {
            return il2cpp::get_class<app::LanguageChanger__Class>(type_info, "", "LanguageChanger");
        }
        inline app::LanguageChanger* create() {
            return il2cpp::create_object<app::LanguageChanger>(get_class());
        }
    } // namespace LanguageChanger
} // namespace app::classes::types
