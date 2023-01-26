#pragma once
#include <Modloader/app/structs/MixerGroupType__Enum.h>
#include <Modloader/app/structs/MixerGroupType__Enum__Array.h>
#include <Modloader/app/structs/MixerGroupType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MixerGroupType__Enum {
        inline app::MixerGroupType__Enum__Class** type_info() {
            static app::MixerGroupType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MixerGroupType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MixerGroupType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MixerGroupType__Enum__Class>(type_info(), "", "MixerGroupType");
        }
        inline app::MixerGroupType__Enum* create() {
            return il2cpp::create_object<app::MixerGroupType__Enum>(get_class());
        }
        inline app::MixerGroupType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MixerGroupType__Enum__Array>(get_class(), size);
        }
        inline app::MixerGroupType__Enum__Array* create_array(const std::vector<app::MixerGroupType__Enum*>& items) {
            return il2cpp::array_new<app::MixerGroupType__Enum__Array>(get_class(), items);
        }
    } // namespace MixerGroupType__Enum
} // namespace app::classes::types
