#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityWebRequest_UnityWebRequestError__Enum__Class.h>
#include <Modloader/app/structs/UnityWebRequest_UnityWebRequestError__Enum.h>

namespace app::classes::types {
    namespace UnityWebRequest_UnityWebRequestError__Enum {
        namespace {
            inline app::UnityWebRequest_UnityWebRequestError__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnityWebRequest_UnityWebRequestError__Enum__Class** type_info = &type_info_ref;
        inline app::UnityWebRequest_UnityWebRequestError__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityWebRequest_UnityWebRequestError__Enum__Class>(type_info, "UnityEngine.Networking", "UnityWebRequest", "UnityWebRequestError");
        }
        inline app::UnityWebRequest_UnityWebRequestError__Enum* create() {
            return il2cpp::create_object<app::UnityWebRequest_UnityWebRequestError__Enum>(get_class());
        }
    } // namespace UnityWebRequest_UnityWebRequestError__Enum
} // namespace app::classes::types
