#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabWebRequest_c_DisplayClass31_0__Class.h>
#include <Modloader/app/structs/PlayFabWebRequest_c_DisplayClass31_0.h>

namespace app::classes::types {
    namespace PlayFabWebRequest_c_DisplayClass31_0 {
        inline app::PlayFabWebRequest_c_DisplayClass31_0__Class** type_info = (app::PlayFabWebRequest_c_DisplayClass31_0__Class**)(modloader::win::memory::resolve_rva(0x0472C630));
        inline app::PlayFabWebRequest_c_DisplayClass31_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabWebRequest_c_DisplayClass31_0__Class>(type_info, "PlayFab.Internal", "PlayFabWebRequest", "<>c__DisplayClass31_0");
        }
        inline app::PlayFabWebRequest_c_DisplayClass31_0* create() {
            return il2cpp::create_object<app::PlayFabWebRequest_c_DisplayClass31_0>(get_class());
        }
    } // namespace PlayFabWebRequest_c_DisplayClass31_0
} // namespace app::classes::types
