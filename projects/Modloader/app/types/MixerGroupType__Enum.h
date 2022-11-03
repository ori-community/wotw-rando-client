#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MixerGroupType__Enum {
        namespace {
            inline app::MixerGroupType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MixerGroupType__Enum__Class** type_info = &type_info_ref;
        inline app::MixerGroupType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MixerGroupType__Enum__Class>(type_info, "", "MixerGroupType");
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
