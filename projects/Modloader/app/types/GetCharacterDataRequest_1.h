#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterDataRequest_1 {
        inline app::GetCharacterDataRequest_1__Class** type_info = (app::GetCharacterDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04755DE0));
        inline app::GetCharacterDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterDataRequest");
        }
        inline app::GetCharacterDataRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterDataRequest_1>(get_class());
        }
    } // namespace GetCharacterDataRequest_1
} // namespace app::classes::types
