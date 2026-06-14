#pragma once
#include <Modloader/app/structs/Portal.h>
#include <Modloader/app/structs/Portal__Array.h>
#include <Modloader/app/structs/Portal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Portal {
        inline app::Portal__Class** type_info() {
            static app::Portal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Portal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Portal__Class* get_class() {
            return il2cpp::get_class<app::Portal__Class>(type_info(), "", "Portal");
        }
        inline app::Portal* create() {
            return il2cpp::create_object<app::Portal>(get_class());
        }
        inline app::Portal__Array* create_array(int size) {
            return il2cpp::array_new<app::Portal__Array>(get_class(), size);
        }
        inline app::Portal__Array* create_array(const std::vector<app::Portal*>& items) {
            return il2cpp::array_new<app::Portal__Array>(get_class(), items);
        }
    } // namespace Portal
} // namespace app::classes::types
