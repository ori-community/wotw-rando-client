#pragma once
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection.h>
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection__Array.h>
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilitiesPlugin_FieldInfoCollection {
        inline app::AbilitiesPlugin_FieldInfoCollection__Class** type_info() {
            static app::AbilitiesPlugin_FieldInfoCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AbilitiesPlugin_FieldInfoCollection__Class**)(modloader::win::memory::resolve_rva(0x047854F0));
            }
            return cache;
        }
        inline app::AbilitiesPlugin_FieldInfoCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::AbilitiesPlugin_FieldInfoCollection__Class>(type_info(), "", "AbilitiesPlugin", "FieldInfoCollection");
        }
        inline app::AbilitiesPlugin_FieldInfoCollection* create() {
            return il2cpp::create_object<app::AbilitiesPlugin_FieldInfoCollection>(get_class());
        }
        inline app::AbilitiesPlugin_FieldInfoCollection__Array* create_array(int size) {
            return il2cpp::array_new<app::AbilitiesPlugin_FieldInfoCollection__Array>(get_class(), size);
        }
        inline app::AbilitiesPlugin_FieldInfoCollection__Array* create_array(const std::vector<app::AbilitiesPlugin_FieldInfoCollection*>& items) {
            return il2cpp::array_new<app::AbilitiesPlugin_FieldInfoCollection__Array>(get_class(), items);
        }
    } // namespace AbilitiesPlugin_FieldInfoCollection
} // namespace app::classes::types
