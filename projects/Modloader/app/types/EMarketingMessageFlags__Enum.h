#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EMarketingMessageFlags__Enum__Class.h>
#include <Modloader/app/structs/EMarketingMessageFlags__Enum.h>

namespace app::classes::types {
    namespace EMarketingMessageFlags__Enum {
        namespace {
            inline app::EMarketingMessageFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EMarketingMessageFlags__Enum__Class** type_info = &type_info_ref;
        inline app::EMarketingMessageFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMarketingMessageFlags__Enum__Class>(type_info, "Steamworks", "EMarketingMessageFlags");
        }
        inline app::EMarketingMessageFlags__Enum* create() {
            return il2cpp::create_object<app::EMarketingMessageFlags__Enum>(get_class());
        }
    } // namespace EMarketingMessageFlags__Enum
} // namespace app::classes::types
