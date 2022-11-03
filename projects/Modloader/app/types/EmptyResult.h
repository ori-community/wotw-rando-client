#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmptyResult {
        inline app::EmptyResult__Class** type_info = (app::EmptyResult__Class**)(modloader::win::memory::resolve_rva(0x047361D8));
        inline app::EmptyResult__Class* get_class() {
            return il2cpp::get_class<app::EmptyResult__Class>(type_info, "PlayFab.ClientModels", "EmptyResult");
        }
        inline app::EmptyResult* create() {
            return il2cpp::create_object<app::EmptyResult>(get_class());
        }
    } // namespace EmptyResult
} // namespace app::classes::types
