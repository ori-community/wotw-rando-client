#pragma once
#include <Modloader/app/structs/EmptyResponse_3.h>
#include <Modloader/app/structs/EmptyResponse_3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyResponse_3 {
        inline app::EmptyResponse_3__Class** type_info() {
            static app::EmptyResponse_3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EmptyResponse_3__Class**)(modloader::win::memory::resolve_rva(0x04741FB0));
            }
            return cache;
        }
        inline app::EmptyResponse_3__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse_3__Class>(type_info(), "PlayFab.ServerModels", "EmptyResponse");
        }
        inline app::EmptyResponse_3* create() {
            return il2cpp::create_object<app::EmptyResponse_3>(get_class());
        }
    } // namespace EmptyResponse_3
} // namespace app::classes::types
