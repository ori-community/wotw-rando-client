#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_ShelledUnshelledAnimPair {
        namespace {
            inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class** type_info = &type_info_ref;
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Class>(type_info, "", "SpikeSlugEntity", "ShelledUnshelledAnimPair");
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_ShelledUnshelledAnimPair>(get_class());
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array* create_array(int size) {
            return il2cpp::array_new<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array>(get_class(), size);
        }
        inline app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array* create_array(const std::vector<app::SpikeSlugEntity_ShelledUnshelledAnimPair*>& items) {
            return il2cpp::array_new<app::SpikeSlugEntity_ShelledUnshelledAnimPair__Array>(get_class(), items);
        }
    } // namespace SpikeSlugEntity_ShelledUnshelledAnimPair
} // namespace app::classes::types
