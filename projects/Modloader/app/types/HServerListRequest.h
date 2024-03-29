#pragma once
#include <Modloader/app/structs/HServerListRequest.h>
#include <Modloader/app/structs/HServerListRequest__Boxed.h>
#include <Modloader/app/structs/HServerListRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HServerListRequest {
        inline app::HServerListRequest__Class** type_info() {
            static app::HServerListRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HServerListRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D3D0));
            }
            return cache;
        }
        inline app::HServerListRequest__Class* get_class() {
            return il2cpp::get_class<app::HServerListRequest__Class>(type_info(), "Steamworks", "HServerListRequest");
        }
        inline app::HServerListRequest* create() {
            return il2cpp::create_object<app::HServerListRequest>(get_class());
        }
        inline app::HServerListRequest__Boxed* box(app::HServerListRequest value) {
            return il2cpp::box_value<app::HServerListRequest__Boxed>(get_class(), value);
        }
    } // namespace HServerListRequest
} // namespace app::classes::types
