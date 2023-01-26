#pragma once
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/EntityTargetting__Array.h>
#include <Modloader/app/structs/EntityTargetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityTargetting {
        inline app::EntityTargetting__Class** type_info() {
            static app::EntityTargetting__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityTargetting__Class**)(modloader::win::memory::resolve_rva(0x04769B00));
            }
            return cache;
        }
        inline app::EntityTargetting__Class* get_class() {
            return il2cpp::get_class<app::EntityTargetting__Class>(type_info(), "", "EntityTargetting");
        }
        inline app::EntityTargetting* create() {
            return il2cpp::create_object<app::EntityTargetting>(get_class());
        }
        inline app::EntityTargetting__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityTargetting__Array>(get_class(), size);
        }
        inline app::EntityTargetting__Array* create_array(const std::vector<app::EntityTargetting*>& items) {
            return il2cpp::array_new<app::EntityTargetting__Array>(get_class(), items);
        }
    } // namespace EntityTargetting
} // namespace app::classes::types
