#pragma once
#include <Modloader/app/structs/SandstormZone.h>
#include <Modloader/app/structs/SandstormZone__Array.h>
#include <Modloader/app/structs/SandstormZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandstormZone {
        inline app::SandstormZone__Class** type_info() {
            static app::SandstormZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandstormZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandstormZone__Class* get_class() {
            return il2cpp::get_class<app::SandstormZone__Class>(type_info(), "", "SandstormZone");
        }
        inline app::SandstormZone* create() {
            return il2cpp::create_object<app::SandstormZone>(get_class());
        }
        inline app::SandstormZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SandstormZone__Array>(get_class(), size);
        }
        inline app::SandstormZone__Array* create_array(const std::vector<app::SandstormZone*>& items) {
            return il2cpp::array_new<app::SandstormZone__Array>(get_class(), items);
        }
    } // namespace SandstormZone
} // namespace app::classes::types
