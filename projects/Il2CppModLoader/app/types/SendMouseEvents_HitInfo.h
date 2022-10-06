#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendMouseEvents_HitInfo {
        namespace {
            app::SendMouseEvents_HitInfo__Class* type_info_ref = nullptr;
        }
        app::SendMouseEvents_HitInfo__Class** type_info = &type_info_ref;
        inline app::SendMouseEvents_HitInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SendMouseEvents_HitInfo__Class>(type_info, "UnityEngine", "SendMouseEvents", "HitInfo");
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
        inline app::SendMouseEvents_HitInfo__Array* create_array(const std::vector<app::SendMouseEvents_HitInfo__Boxed>& items) {
            return il2cpp::array_new<app::SendMouseEvents_HitInfo__Array>(get_class(), items);
        }
    } // namespace SendMouseEvents_HitInfo
} // namespace app::classes::types
