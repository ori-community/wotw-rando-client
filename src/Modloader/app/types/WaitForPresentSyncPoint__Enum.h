#pragma once
#include <Modloader/app/structs/WaitForPresentSyncPoint__Enum.h>
#include <Modloader/app/structs/WaitForPresentSyncPoint__Enum__Array.h>
#include <Modloader/app/structs/WaitForPresentSyncPoint__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForPresentSyncPoint__Enum {
        inline app::WaitForPresentSyncPoint__Enum__Class** type_info() {
            static app::WaitForPresentSyncPoint__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForPresentSyncPoint__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForPresentSyncPoint__Enum__Class* get_class() {
            return il2cpp::get_class<app::WaitForPresentSyncPoint__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "WaitForPresentSyncPoint");
        }
        inline app::WaitForPresentSyncPoint__Enum* create() {
            return il2cpp::create_object<app::WaitForPresentSyncPoint__Enum>(get_class());
        }
        inline app::WaitForPresentSyncPoint__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::WaitForPresentSyncPoint__Enum__Array>(get_class(), size);
        }
        inline app::WaitForPresentSyncPoint__Enum__Array* create_array(const std::vector<app::WaitForPresentSyncPoint__Enum*>& items) {
            return il2cpp::array_new<app::WaitForPresentSyncPoint__Enum__Array>(get_class(), items);
        }
    } // namespace WaitForPresentSyncPoint__Enum
} // namespace app::classes::types
