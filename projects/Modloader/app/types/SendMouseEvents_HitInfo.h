#pragma once
#include <Modloader/app/structs/SendMouseEvents_HitInfo.h>
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Array.h>
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Boxed.h>
#include <Modloader/app/structs/SendMouseEvents_HitInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendMouseEvents_HitInfo {
        inline app::SendMouseEvents_HitInfo__Class** type_info() {
            static app::SendMouseEvents_HitInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SendMouseEvents_HitInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SendMouseEvents_HitInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SendMouseEvents_HitInfo__Class>(type_info(), "UnityEngine", "SendMouseEvents", "HitInfo");
        }
        inline app::SendMouseEvents_HitInfo* create() {
            return il2cpp::create_object<app::SendMouseEvents_HitInfo>(get_class());
        }
        inline app::SendMouseEvents_HitInfo__Boxed* box(app::SendMouseEvents_HitInfo value) {
            return il2cpp::box_value<app::SendMouseEvents_HitInfo__Boxed>(get_class(), value);
        }
        inline app::SendMouseEvents_HitInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SendMouseEvents_HitInfo__Array>(get_class(), size);
        }
        inline app::SendMouseEvents_HitInfo__Array* create_array(const std::vector<app::SendMouseEvents_HitInfo>& items) {
            return il2cpp::array_new<app::SendMouseEvents_HitInfo__Array>(get_class(), items);
        }
    } // namespace SendMouseEvents_HitInfo
} // namespace app::classes::types
