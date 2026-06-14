#pragma once
#include <Modloader/app/structs/EmptyResponse_1.h>
#include <Modloader/app/structs/EmptyResponse_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyResponse_1 {
        inline app::EmptyResponse_1__Class** type_info() {
            static app::EmptyResponse_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EmptyResponse_1__Class**)(modloader::win::memory::resolve_rva(0x0472C090));
            }
            return cache;
        }
        inline app::EmptyResponse_1__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse_1__Class>(type_info(), "PlayFab.GroupsModels", "EmptyResponse");
        }
        inline app::EmptyResponse_1* create() {
            return il2cpp::create_object<app::EmptyResponse_1>(get_class());
        }
    } // namespace EmptyResponse_1
} // namespace app::classes::types
