#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NetworkReachability__Enum__Class.h>
#include <Modloader/app/structs/NetworkReachability__Enum.h>

namespace app::classes::types {
    namespace NetworkReachability__Enum {
        namespace {
            inline app::NetworkReachability__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NetworkReachability__Enum__Class** type_info = &type_info_ref;
        inline app::NetworkReachability__Enum__Class* get_class() {
            return il2cpp::get_class<app::NetworkReachability__Enum__Class>(type_info, "UnityEngine", "NetworkReachability");
        }
        inline app::NetworkReachability__Enum* create() {
            return il2cpp::create_object<app::NetworkReachability__Enum>(get_class());
        }
    } // namespace NetworkReachability__Enum
} // namespace app::classes::types
