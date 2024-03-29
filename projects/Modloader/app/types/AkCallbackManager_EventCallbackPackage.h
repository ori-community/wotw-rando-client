#pragma once
#include <Modloader/app/structs/AkCallbackManager_EventCallbackPackage.h>
#include <Modloader/app/structs/AkCallbackManager_EventCallbackPackage__Array.h>
#include <Modloader/app/structs/AkCallbackManager_EventCallbackPackage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_EventCallbackPackage {
        inline app::AkCallbackManager_EventCallbackPackage__Class** type_info() {
            static app::AkCallbackManager_EventCallbackPackage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkCallbackManager_EventCallbackPackage__Class**)(modloader::win::memory::resolve_rva(0x047575F0));
            }
            return cache;
        }
        inline app::AkCallbackManager_EventCallbackPackage__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_EventCallbackPackage__Class>(type_info(), "", "AkCallbackManager", "EventCallbackPackage");
        }
        inline app::AkCallbackManager_EventCallbackPackage* create() {
            return il2cpp::create_object<app::AkCallbackManager_EventCallbackPackage>(get_class());
        }
        inline app::AkCallbackManager_EventCallbackPackage__Array* create_array(int size) {
            return il2cpp::array_new<app::AkCallbackManager_EventCallbackPackage__Array>(get_class(), size);
        }
        inline app::AkCallbackManager_EventCallbackPackage__Array* create_array(const std::vector<app::AkCallbackManager_EventCallbackPackage*>& items) {
            return il2cpp::array_new<app::AkCallbackManager_EventCallbackPackage__Array>(get_class(), items);
        }
    } // namespace AkCallbackManager_EventCallbackPackage
} // namespace app::classes::types
