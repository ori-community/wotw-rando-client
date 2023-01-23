#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CombinedMessageProvider__Class.h>
#include <Modloader/app/structs/CombinedMessageProvider.h>

namespace app::classes::types {
    namespace CombinedMessageProvider {
        namespace {
            inline app::CombinedMessageProvider__Class* type_info_ref = nullptr;
        }
        inline app::CombinedMessageProvider__Class** type_info = &type_info_ref;
        inline app::CombinedMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::CombinedMessageProvider__Class>(type_info, "", "CombinedMessageProvider");
        }
        inline app::CombinedMessageProvider* create() {
            return il2cpp::create_object<app::CombinedMessageProvider>(get_class());
        }
    } // namespace CombinedMessageProvider
} // namespace app::classes::types
