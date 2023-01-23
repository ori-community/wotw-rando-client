#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WispMessageProvider__Class.h>
#include <Modloader/app/structs/WispMessageProvider.h>

namespace app::classes::types {
    namespace WispMessageProvider {
        namespace {
            inline app::WispMessageProvider__Class* type_info_ref = nullptr;
        }
        inline app::WispMessageProvider__Class** type_info = &type_info_ref;
        inline app::WispMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::WispMessageProvider__Class>(type_info, "", "WispMessageProvider");
        }
        inline app::WispMessageProvider* create() {
            return il2cpp::create_object<app::WispMessageProvider>(get_class());
        }
    } // namespace WispMessageProvider
} // namespace app::classes::types
