#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkCallbackInfo__Class.h>
#include <Modloader/app/structs/AkCallbackInfo.h>

namespace app::classes::types {
    namespace AkCallbackInfo {
        namespace {
            inline app::AkCallbackInfo__Class* type_info_ref = nullptr;
        }
        inline app::AkCallbackInfo__Class** type_info = &type_info_ref;
        inline app::AkCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackInfo__Class>(type_info, "", "AkCallbackInfo");
        }
        inline app::AkCallbackInfo* create() {
            return il2cpp::create_object<app::AkCallbackInfo>(get_class());
        }
    } // namespace AkCallbackInfo
} // namespace app::classes::types
