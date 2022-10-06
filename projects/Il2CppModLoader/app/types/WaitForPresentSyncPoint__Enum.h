#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForPresentSyncPoint__Enum {
        namespace {
            app::WaitForPresentSyncPoint__Enum__Class* type_info_ref = nullptr;
        }
        app::WaitForPresentSyncPoint__Enum__Class** type_info = &type_info_ref;
        inline app::WaitForPresentSyncPoint__Enum__Class* get_class() {
            return il2cpp::get_class<app::WaitForPresentSyncPoint__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "WaitForPresentSyncPoint");
        }
        inline app::WaitForPresentSyncPoint__Enum* create() {
            return il2cpp::create_object<app::WaitForPresentSyncPoint__Enum>(get_class());
        }
        inline app::WaitForPresentSyncPoint__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::WaitForPresentSyncPoint__Enum__Array>(get_class(), size);
        }
        inline app::WaitForPresentSyncPoint__Enum__Array* create_array(const std::vector<app::WaitForPresentSyncPoint__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::WaitForPresentSyncPoint__Enum__Array>(get_class(), items);
        }
    } // namespace WaitForPresentSyncPoint__Enum
} // namespace app::classes::types
