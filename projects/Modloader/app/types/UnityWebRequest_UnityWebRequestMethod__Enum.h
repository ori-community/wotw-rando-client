#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityWebRequest_UnityWebRequestMethod__Enum {
        namespace {
            inline app::UnityWebRequest_UnityWebRequestMethod__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnityWebRequest_UnityWebRequestMethod__Enum__Class** type_info = &type_info_ref;
        inline app::UnityWebRequest_UnityWebRequestMethod__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityWebRequest_UnityWebRequestMethod__Enum__Class>(type_info, "UnityEngine.Networking", "UnityWebRequest", "UnityWebRequestMethod");
        }
        inline app::UnityWebRequest_UnityWebRequestMethod__Enum* create() {
            return il2cpp::create_object<app::UnityWebRequest_UnityWebRequestMethod__Enum>(get_class());
        }
    } // namespace UnityWebRequest_UnityWebRequestMethod__Enum
} // namespace app::classes::types
