#pragma once
#include <Modloader/app/structs/EmptyResult.h>
#include <Modloader/app/structs/EmptyResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyResult {
        inline app::EmptyResult__Class** type_info() {
            static app::EmptyResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EmptyResult__Class**)(modloader::win::memory::resolve_rva(0x047361D8));
            }
            return cache;
        }
        inline app::EmptyResult__Class* get_class() {
            return il2cpp::get_class<app::EmptyResult__Class>(type_info(), "PlayFab.ClientModels", "EmptyResult");
        }
        inline app::EmptyResult* create() {
            return il2cpp::create_object<app::EmptyResult>(get_class());
        }
    } // namespace EmptyResult
} // namespace app::classes::types
