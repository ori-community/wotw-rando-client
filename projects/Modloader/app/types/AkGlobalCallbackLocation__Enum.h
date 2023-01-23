#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkGlobalCallbackLocation__Enum__Class.h>
#include <Modloader/app/structs/AkGlobalCallbackLocation__Enum.h>

namespace app::classes::types {
    namespace AkGlobalCallbackLocation__Enum {
        namespace {
            inline app::AkGlobalCallbackLocation__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkGlobalCallbackLocation__Enum__Class** type_info = &type_info_ref;
        inline app::AkGlobalCallbackLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkGlobalCallbackLocation__Enum__Class>(type_info, "", "AkGlobalCallbackLocation");
        }
        inline app::AkGlobalCallbackLocation__Enum* create() {
            return il2cpp::create_object<app::AkGlobalCallbackLocation__Enum>(get_class());
        }
    } // namespace AkGlobalCallbackLocation__Enum
} // namespace app::classes::types
