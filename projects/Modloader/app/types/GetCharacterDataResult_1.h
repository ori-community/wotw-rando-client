#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterDataResult_1 {
        inline app::GetCharacterDataResult_1__Class** type_info = (app::GetCharacterDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x04717DE0));
        inline app::GetCharacterDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterDataResult_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterDataResult");
        }
        inline app::GetCharacterDataResult_1* create() {
            return il2cpp::create_object<app::GetCharacterDataResult_1>(get_class());
        }
    } // namespace GetCharacterDataResult_1
} // namespace app::classes::types
