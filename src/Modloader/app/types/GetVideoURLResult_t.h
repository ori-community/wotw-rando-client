#pragma once
#include <Modloader/app/structs/GetVideoURLResult_t.h>
#include <Modloader/app/structs/GetVideoURLResult_t__Boxed.h>
#include <Modloader/app/structs/GetVideoURLResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetVideoURLResult_t {
        inline app::GetVideoURLResult_t__Class** type_info() {
            static app::GetVideoURLResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetVideoURLResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetVideoURLResult_t__Class* get_class() {
            return il2cpp::get_class<app::GetVideoURLResult_t__Class>(type_info(), "Steamworks", "GetVideoURLResult_t");
        }
        inline app::GetVideoURLResult_t* create() {
            return il2cpp::create_object<app::GetVideoURLResult_t>(get_class());
        }
        inline app::GetVideoURLResult_t__Boxed* box(app::GetVideoURLResult_t value) {
            return il2cpp::box_value<app::GetVideoURLResult_t__Boxed>(get_class(), value);
        }
    } // namespace GetVideoURLResult_t
} // namespace app::classes::types
