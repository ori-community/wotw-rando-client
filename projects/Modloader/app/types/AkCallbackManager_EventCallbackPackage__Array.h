#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCallbackManager_EventCallbackPackage__Array {
        namespace {
            inline app::AkCallbackManager_EventCallbackPackage__Array__Class* type_info_ref = nullptr;
        }
        inline app::AkCallbackManager_EventCallbackPackage__Array__Class** type_info = &type_info_ref;
        inline app::AkCallbackManager_EventCallbackPackage__Array__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackManager_EventCallbackPackage__Array__Class>(type_info, "", "AkCallbackManager+EventCallbackPackage[]");
        }
        inline app::AkCallbackManager_EventCallbackPackage__Array* create() {
            return il2cpp::create_object<app::AkCallbackManager_EventCallbackPackage__Array>(get_class());
        }
    } // namespace AkCallbackManager_EventCallbackPackage__Array
} // namespace app::classes::types
