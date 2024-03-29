#pragma once
#include <Modloader/app/structs/WriteEventResponse_1.h>
#include <Modloader/app/structs/WriteEventResponse_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteEventResponse_1 {
        inline app::WriteEventResponse_1__Class** type_info() {
            static app::WriteEventResponse_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteEventResponse_1__Class**)(modloader::win::memory::resolve_rva(0x047090B0));
            }
            return cache;
        }
        inline app::WriteEventResponse_1__Class* get_class() {
            return il2cpp::get_class<app::WriteEventResponse_1__Class>(type_info(), "PlayFab.ServerModels", "WriteEventResponse");
        }
        inline app::WriteEventResponse_1* create() {
            return il2cpp::create_object<app::WriteEventResponse_1>(get_class());
        }
    } // namespace WriteEventResponse_1
} // namespace app::classes::types
